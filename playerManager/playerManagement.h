#ifndef PLAYERMANAGER_H
#define PLAYERMANAGER_H

//Character Types
#include "../character/character.h"
#include "../characterTypes/Archer.h"
#include "../characterTypes/Thief.h"
#include "../characterTypes/Mage.h"
#include "../characterTypes/Knight.h"
#include "../attackPlayer/attack.h"
//Character Attacks
#include "../attackPlayer/archerAttack.h"
#include "../attackPlayer/knightAttack.h"
#include "../attackPlayer/mageAttack.h"
#include "../attackPlayer/thiefAttack.h"
#include "../inventoryClass/Inventory.h"
//Character inventory

//Dice Roll
#include "../diceRoll/diceRoll.h"
//Menu
#include "../menu/menu.h"

class PlayerManager {
    private:
        Mage* pMage = new Mage;
        Archer* pArcher = new Archer;
        Knight* pKnight = new Knight;
        Thief* pThief = new Thief;
        mageAttack mAtk;
        archerAttack aAtk;
        knightAttack kAtk;
        thiefAttack tAtk;       
        DiceRoll rollDice;
        Inventory inventory;
        std::vector<int> initVectOrder;
        bool end = false;
        bool p1Dead=false;
        bool p2Dead=false;
        bool p3Dead=false;
        bool p4Dead=false;
        int playerOrder=0;
        int pAttack=0;
        int pDefend=0;
        int pDice=0;
        int actionChoice=0;
        int spChoice=0;
        int invChoice=0;
        Menu menu;
    public:
        void applyDamage(int playerNum, int dmg);
        PlayerManager();
        void battle();
        void endCheck();
        void fixPlayerSPHP();
        int getPlayerOrder();
        void setPlayerCharChoice(int,int);
        void setOrder();
        void callBattleMage();
        void callBattleThief();
        void callBattleKnight();
        void callBattleArcher();
        int findWinner();
        void itemUse(int itemNumber, Character* character );
};

#endif // PLAYERMANAGER_H