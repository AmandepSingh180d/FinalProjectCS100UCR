#ifndef MENU_H
#define MENU_H

#include<vector>
#include<iostream>
#include<string>
#include "../choiceClass/Choice.h"
#include "../character/character.h"
#include "../characterTypes/Archer.h"
#include "../characterTypes/Knight.h"
#include "../characterTypes/Mage.h"
#include "../characterTypes/Thief.h"

class Menu : public Choice{
    private:
        Choice playerChoice;
        Archer* myArcher;
        Knight* myKnight;
        Mage* myMage;
        Thief* myThief;
        //Archer SP attack and Inventory
        std::string archerSP1="";
        std::string archerSP2="";
        std::string archerSP3="";
        std::string archerInv1="";
        std::string archerInv2="";
        std::string archerInv3="";
        //Knight SP attack and Inventory
        std::string knightSP1="";
        std::string knightSP2="";
        std::string knightSP3="";
        std::string knightInv1="";
        std::string knightInv2="";
        std::string knightInv3="";
        //Mage SP attack and Inventory
        std::string mageSP1="";
        std::string mageSP2="";
        std::string mageSP3="";
        std::string mageInv1="";
        std::string mageInv2="";
        std::string mageInv3="";
        //Thief SP attack and Inventory
        std::string thiefSP1="";
        std::string thiefSP2="";
        std::string thiefSP3="";
        std::string thiefInv1="";
        std::string thiefInv2="";
        std::string thiefInv3="";
        //setting players
        int pMage=0;
        int pArcher=0;
        int pKnight =0;
        int pThief=0;

    public:
        Menu(Archer* playArcher,Knight* playKnight,Mage* playMage, Thief* playThief);
        void menuTitleScreen();
        int menuCharacterScreen(int playerNum);
        int menuBattleChoice(int playerAttack, int playerDefend, int diceRoll);
        int chooseWhoAttack(int playerNum);
        //void findCharChoice(int p1,int p2, int p3,int p4);
        //SP
        int menuArcherSPChoice(int playerAttack, int playerDefend, int diceRoll);
        int menuKnightSPChoice(int playerAttack, int playerDefend, int diceRoll);
        int menuMageSPChoice(int playerAttack, int playerDefend, int diceRoll);
        int menuThiefSPChoice(int playerAttack, int playerDefend, int diceRoll);
        //Inventory
        int menuArcherInvChoice(int playerAttack, int playerDefend, int diceRoll);
        int menuKnightInvChoice(int playerAttack, int playerDefend, int diceRoll);
        int menuMageInvChoice(int playerAttack, int playerDefend, int diceRoll);
        int menuThiefInvChoice(int playerAttack, int playerDefend, int diceRoll);
        //Int end
        void menuTrophyCeremony(int playerWinner, int player1DMG, int player2DMG, int player3DMG, int player4DMG);
        void playAgain();
        //Declarations
        void applySPArcher();
        void applyInvArcher();
        void applySPKnight();
        void applyInvKnight();
        void applySPMage();
        void applyInvMage();
        void applySPThief();
        void applyInvThief();

};

#endif