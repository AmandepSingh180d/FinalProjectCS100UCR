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
//Character inventory
#include "../inventoryClass/Inventory.h"
//Dice Roll
#include "../diceRoll/diceRoll.h"
//Menu
#include "../menu/menu.h"
//Statmanager
#include "../statManagerClass/statManager.h"
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
        int mageStat=0;
        int archerStat=0;
        int thiefStat=0;
        int knightStat=0;
        Menu menu;
        statManager sManage;
    public:
        void callAttack(int attackType, int playerNum, int attackingPlayernum);
        void applyDamage(int playerNum, int dmg);
        PlayerManager();
        ~PlayerManager();
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
        void setStats();
};

#endif // PLAYERMANAGER_H