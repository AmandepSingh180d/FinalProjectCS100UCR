#include "menu.h"
#include <iostream>
#include <string>
#include "../choiceClass/Choice.h"
#include <cstdlib>

Menu::Menu(Archer* playArcher,Knight* playKnight,Mage* playMage, Thief* playThief){
    myArcher=playArcher;
    myKnight=playKnight;
    myMage=playMage;
    myThief=playThief;
    applySPArcher();
    applyInvArcher();
    applySPKnight();
    applyInvKnight();
    applySPMage();
    applyInvMage();
    applySPThief();
    applyInvThief();
}

void Menu::applySPArcher(){
    std::vector<std::string> archerSPAttack = myArcher->getSpecialAttack();
    archerSP1=archerSPAttack[0];
    archerSP2=archerSPAttack[1];
    archerSP3=archerSPAttack[2];
}
void Menu::applySPKnight(){
    std::vector<std::string> knightSPAttack = myKnight->getSpecialAttack();
    knightSP1 = knightSPAttack[0];
    knightSP2 = knightSPAttack[1];
    knightSP3 = knightSPAttack[2];
}
void Menu::applySPMage(){
    std::vector<std::string> mageSPAttack = myMage->getSpecialAttack();
    mageSP1 = mageSPAttack[0];
    mageSP2 = mageSPAttack[1];
    mageSP3 = mageSPAttack[2];
}
void Menu::applySPThief(){
    std::vector<std::string> thiefSPAttack = myThief->getSpecialAttack();
    thiefSP1 = thiefSPAttack[0];
    thiefSP2 = thiefSPAttack[1];
    thiefSP3 = thiefSPAttack[2];
}
void Menu::applyInvArcher(){
    std::vector<std::string> archerInv = myArcher->getInventory();
    archerInv1 = archerInv[0];
    archerInv2 = archerInv[1];
    archerInv3 = archerInv[2];
}
void Menu::applyInvKnight(){
    std::vector<std::string> knightInv = myKnight->getInventory();
    knightInv1 = knightInv[0];
    knightInv2 = knightInv[1];
    knightInv3 = knightInv[2];
}

void Menu::applyInvMage(){
    std::vector<std::string> mageInv = myMage->getInventory();
    mageInv1 = mageInv[0];
    mageInv2 = mageInv[1];
    mageInv3 = mageInv[2];
}

void Menu::applyInvThief(){
    std::vector<std::string> thiefInv = myThief->getInventory();
    thiefInv1 = thiefInv[0];
    thiefInv2 = thiefInv[1];
    thiefInv3 = thiefInv[2];
}

void Menu::menuTitleScreen(){
    system("clear"); //Clears terminal screen
    std::cout<< "***********************************************************************************\n";//1
    std::cout<< "*                                                                                 *\n";//2
    std::cout<< "*                                                                                 *\n";//3
    std::cout<< "*                                                                                 *\n";//4
    std::cout<< "*                                                                                 *\n";//5
    std::cout<< "*                                 FANTASY BRAWL                                   *\n";//6
    std::cout<< "*                            (Enter anything to begin)                            *\n";//7
    std::cout<< "*                                                                                 *\n";//8
    std::cout<< "*                                                                                 *\n";//9
    std::cout<< "*                                                                                 *\n";//10
    std::cout<< "*                                                                                 *\n";//11
    std::cout<< "*                                                                                 *\n";//12
    std::cout<< "***********************************************************************************\n";//13
    std::string tempIntroVal = "";
    std::getline(std::cin, tempIntroVal);
}

int Menu::menuCharacterScreen(int playerNum){
    system("clear"); //Clears terminal screen
    std::cout<< "***********************************************************************************\n";//1
    std::cout<< "*                                                                                 *\n";//2
    std::cout<< "*                                                                                 *\n";//3
    std::cout<< "*                                                                                 *\n";//4
    std::cout<< "*                                                                                 *\n";//5
    std::cout<< "*                          Choose Your Charaacter Player " <<playerNum <<"                        *\n";//6
    std::cout<< "*                             (1 character per player)                            *\n";//7
    std::cout<< "*                                                                                 *\n";//8
    std::cout<< "*         Mage(1)         Knight(2)         Thief(3)           Archer(4)          *\n";//9
    std::cout<< "*         HP:100           HP:100            HP:100             HP:100            *\n";//10
    std::cout<< "*         SP:20            SP:20             SP:20              SP:20             *\n";//11
    std::cout<< "*                                                                                 *\n";//12
    std::cout<< "***********************************************************************************\n";//13
    return playerChoice.characterChoice();
}

int Menu::menuBattleChoice(int playerAttack, int playerDefend, int diceRoll){
    system("clear"); //Clears terminal screen
    std::cout<< "***********************************************************************************\n";//1
    std::cout<< "*            Mage["<<myMage->getplayerOrderNum()<<"]         Archer["<<myArcher->getplayerOrderNum()<<"]          Thief["<<myThief->getplayerOrderNum()<<"]         Knight["<<myKnight->getplayerOrderNum()<<"]        *\n";//2
    std::cout<< "*           HP:"<<myMage->getHealth() <<"          HP:"<<myArcher->getHealth() <<"              HP:"<<myThief->getHealth()<<"          HP:"<<myKnight->getHealth()<<"            *\n";//3
    std::cout<< "*           SP:"<<myMage->getSpecialPoints() <<"           SP:"<<myArcher->getSpecialPoints() <<"               SP:"<<myThief->getSpecialPoints()<<"           SP:"<<myKnight->getSpecialPoints()<<"             *\n";//4
    std::cout<< "*                                                                                 *\n";//5
    std::cout<< "*                                                                                 *\n";//6
    std::cout<< "*                                                                                 *\n";//7
    std::cout<< "*   Player "<<playerAttack <<" rolled a "<<diceRoll<<" attacking player "<<playerDefend<<"                                       *\n";//8
    std::cout<< "*                                                                                 *\n";//9
    std::cout<< "*    Attack(1)[10 DAMAGE]                                    Special Attack(2)    *\n";//10
    std::cout<< "*                                                                                 *\n";//11
    std::cout<< "*    Inventory(3)                                            Run(4)               *\n";//12
    std::cout<< "***********************************************************************************\n";//13 
    return playerChoice.actionChoice();
}

void Menu::clearBattleMenu(){
    system("clear"); //Clears terminal screen
    std::cout<< "***********************************************************************************\n";//1
    std::cout<< "*            Mage["<<myMage->getplayerOrderNum()<<"]         Archer["<<myArcher->getplayerOrderNum()<<"]          Thief["<<myThief->getplayerOrderNum()<<"]         Knight["<<myKnight->getplayerOrderNum()<<"]        *\n";//2
    std::cout<< "*           HP:"<<myMage->getHealth() <<"          HP:"<<myArcher->getHealth() <<"              HP:"<<myThief->getHealth()<<"          HP:"<<myKnight->getHealth()<<"            *\n";//3
    std::cout<< "*           SP:"<<myMage->getSpecialPoints() <<"           SP:"<<myArcher->getSpecialPoints() <<"               SP:"<<myThief->getSpecialPoints()<<"           SP:"<<myKnight->getSpecialPoints()<<"             *\n";//4
    std::cout<< "*                                                                                 *\n";//5
    std::cout<< "*                                                                                 *\n";//6
    std::cout<< "*                                                                                 *\n";//7
    std::cout<< "*                                                                                 *\n";//8
    std::cout<< "*                                                                                 *\n";//9
    std::cout<< "*                                                                                 *\n";//10
    std::cout<< "*                                                                                 *\n";//11
    std::cout<< "*                                                                                 *\n";//12
    std::cout<< "***********************************************************************************\n";//13 
}
//SPCHOICE
int Menu::menuArcherSPChoice(int playerAttack, int playerDefend, int diceRoll){
    system("clear"); //Clears terminal screen
  std::cout<< "***********************************************************************************\n";//1
    std::cout<< "*            Mage["<<myMage->getplayerOrderNum()<<"]         Archer["<<myArcher->getplayerOrderNum()<<"]          Thief["<<myThief->getplayerOrderNum()<<"]         Knight["<<myKnight->getplayerOrderNum()<<"]        *\n";//2
    std::cout<< "*           HP:"<<myMage->getHealth() <<"          HP:"<<myArcher->getHealth() <<"              HP:"<<myThief->getHealth()<<"          HP:"<<myKnight->getHealth()<<"            *\n";//3
    std::cout<< "*           SP:"<<myMage->getSpecialPoints() <<"           SP:"<<myArcher->getSpecialPoints() <<"               SP:"<<myThief->getSpecialPoints()<<"           SP:"<<myKnight->getSpecialPoints()<<"             *\n";//4
    std::cout<< "*                                                                                 *\n";//5
    std::cout<< "*                                                                                 *\n";//6
    std::cout<< "*   Player "<<playerAttack <<" rolled a "<<diceRoll<<" attacking player "<<playerDefend<<"                                       *\n";//7
    std::cout<< "*                                                                                 *\n";//8
    std::cout<< "*     "<<archerSP1<<"(1)                                 "<<archerSP2<<"(2)             *\n";//9
    std::cout<< "*    [SP:5 20 DAMAGE]                                  [SP:10 30 DAMAGE]          *\n";//10
    std::cout<< "*     "<<archerSP3<<"(3)                                                          *\n";//11
    std::cout<< "*    [SP:15 40 DAMAGE]                                                            *\n";//12
    std::cout<< "***********************************************************************************\n";//13
    return playerChoice.specialAttackChoice();
}
int Menu::menuKnightSPChoice(int playerAttack, int playerDefend, int diceRoll){
    system("clear"); //Clears terminal screen
    std::cout<< "***********************************************************************************\n";//1
    std::cout<< "*            Mage["<<myMage->getplayerOrderNum()<<"]         Archer["<<myArcher->getplayerOrderNum()<<"]          Thief["<<myThief->getplayerOrderNum()<<"]         Knight["<<myKnight->getplayerOrderNum()<<"]        *\n";//2
    std::cout<< "*           HP:"<<myMage->getHealth() <<"          HP:"<<myArcher->getHealth() <<"              HP:"<<myThief->getHealth()<<"          HP:"<<myKnight->getHealth()<<"            *\n";//3
    std::cout<< "*           SP:"<<myMage->getSpecialPoints() <<"           SP:"<<myArcher->getSpecialPoints() <<"               SP:"<<myThief->getSpecialPoints()<<"           SP:"<<myKnight->getSpecialPoints()<<"             *\n";//4
    std::cout<< "*                                                                                 *\n";//5
    std::cout<< "*                                                                                 *\n";//6
    std::cout<< "*   Player "<<playerAttack <<" rolled a "<<diceRoll<<" attacking player "<<playerDefend<<"                                       *\n";//7
    std::cout<< "*                                                                                 *\n";//8
    std::cout<< "*     "<<knightSP1<<"(1)                                  "<<knightSP2<<"(2)            *\n";//9
    std::cout<< "*    [SP:5 20 DAMAGE]                                  [SP:10 30 DAMAGE]          *\n";//10
    std::cout<< "*     "<<knightSP3<<"(3)                                                           *\n";//11
    std::cout<< "*    [SP:15 40 DAMAGE]                                                            *\n";//12
    std::cout<< "***********************************************************************************\n";//13
    return playerChoice.specialAttackChoice();
}

int Menu::menuMageSPChoice(int playerAttack, int playerDefend, int diceRoll){
    system("clear"); //Clears terminal screen
    std::cout<< "***********************************************************************************\n";//1
    std::cout<< "*            Mage["<<myMage->getplayerOrderNum()<<"]         Archer["<<myArcher->getplayerOrderNum()<<"]          Thief["<<myThief->getplayerOrderNum()<<"]         Knight["<<myKnight->getplayerOrderNum()<<"]        *\n";//2
    std::cout<< "*           HP:"<<myMage->getHealth() <<"          HP:"<<myArcher->getHealth() <<"              HP:"<<myThief->getHealth()<<"          HP:"<<myKnight->getHealth()<<"            *\n";//3
    std::cout<< "*           SP:"<<myMage->getSpecialPoints() <<"           SP:"<<myArcher->getSpecialPoints() <<"               SP:"<<myThief->getSpecialPoints()<<"           SP:"<<myKnight->getSpecialPoints()<<"             *\n";//4
    std::cout<< "*                                                                                 *\n";//5
    std::cout<< "*                                                                                 *\n";//6
    std::cout<< "*   Player "<<playerAttack <<" rolled a "<<diceRoll<<" attacking player "<<playerDefend<<"                                       *\n";//7
    std::cout<< "*                                                                                 *\n";//8
    std::cout<< "*     "<<mageSP1<<"(1)                                    "<<mageSP2<<"(2)    *\n";//9
    std::cout<< "*    [SP:5 20 DAMAGE]                                  [SP:10 30 DAMAGE]          *\n";//10
    std::cout<< "*     "<<mageSP3<<"(3)                                                             *\n";//11
    std::cout<< "*    [SP:15 40 DAMAGE]                                                            *\n";//12
    std::cout<< "***********************************************************************************\n";//13
    return playerChoice.specialAttackChoice();
}

int Menu::menuThiefSPChoice(int playerAttack, int playerDefend, int diceRoll){
    system("clear"); //Clears terminal screen
    std::cout<< "***********************************************************************************\n";//1
    std::cout<< "*            Mage["<<myMage->getplayerOrderNum()<<"]         Archer["<<myArcher->getplayerOrderNum()<<"]          Thief["<<myThief->getplayerOrderNum()<<"]         Knight["<<myKnight->getplayerOrderNum()<<"]        *\n";//2
    std::cout<< "*           HP:"<<myMage->getHealth() <<"          HP:"<<myArcher->getHealth() <<"              HP:"<<myThief->getHealth()<<"          HP:"<<myKnight->getHealth()<<"            *\n";//3
    std::cout<< "*           SP:"<<myMage->getSpecialPoints() <<"           SP:"<<myArcher->getSpecialPoints() <<"               SP:"<<myThief->getSpecialPoints()<<"           SP:"<<myKnight->getSpecialPoints()<<"             *\n";//4
    std::cout<< "*                                                                                 *\n";//5
    std::cout<< "*                                                                                 *\n";//6
    std::cout<< "*   Player "<<playerAttack <<" rolled a "<<diceRoll<<" attacking player "<<playerDefend<<"                                       *\n";//8
    std::cout<< "*                                                                                 *\n";//8
    std::cout<< "*     "<<thiefSP1<<"(1)                                    "<<thiefSP2<<"(2)             *\n";//9
    std::cout<< "*    [SP:5 20 DAMAGE]                                  [SP:10 30 DAMAGE]          *\n";//10
    std::cout<< "*     "<<thiefSP3<<"(3)                                                                 *\n";//11
    std::cout<< "*    [SP:15 40 DAMAGE]                                                            *\n";//12
    std::cout<< "***********************************************************************************\n";//13
    return playerChoice.specialAttackChoice();
}
//INVENTORY
int Menu::menuArcherInvChoice(int playerAttack, int playerDefend, int diceRoll){
    system("clear"); //Clears terminal screen
    std::cout<< "***********************************************************************************\n";//1
    std::cout<< "*            Mage["<<myMage->getplayerOrderNum()<<"]         Archer["<<myArcher->getplayerOrderNum()<<"]          Thief["<<myThief->getplayerOrderNum()<<"]         Knight["<<myKnight->getplayerOrderNum()<<"]        *\n";//2
    std::cout<< "*           HP:"<<myMage->getHealth() <<"          HP:"<<myArcher->getHealth() <<"              HP:"<<myThief->getHealth()<<"          HP:"<<myKnight->getHealth()<<"            *\n";//3
    std::cout<< "*           SP:"<<myMage->getSpecialPoints() <<"           SP:"<<myArcher->getSpecialPoints() <<"               SP:"<<myThief->getSpecialPoints()<<"           SP:"<<myKnight->getSpecialPoints()<<"             *\n";//4
    std::cout<< "*                                                                                 *\n";//5
    std::cout<< "*                                                                                 *\n";//6
    std::cout<< "*   Player "<<playerAttack <<" rolled a "<<diceRoll<<" attacking player "<<playerDefend<<"                       *\n";//7
    std::cout<< "*                                                                                 *\n";//8
    std::cout<< "*     "<< archerInv1 <<"                                                "<< archerInv2 <<"                             *\n";//9
    std::cout<< "*          (1)                                                       (2)          *\n";//10
    std::cout<< "*     "<< archerInv3 <<"                                                                    *\n";//11
    std::cout<< "*          (3)                                                                    *\n";//12
    std::cout<< "***********************************************************************************\n";//13
    return playerChoice.inventoryChoice();
}
int Menu::menuKnightInvChoice(int playerAttack, int playerDefend, int diceRoll){
    system("clear"); //Clears terminal screen
    std::cout<< "***********************************************************************************\n";//1
    std::cout<< "*            Mage["<<myMage->getplayerOrderNum()<<"]         Archer["<<myArcher->getplayerOrderNum()<<"]          Thief["<<myThief->getplayerOrderNum()<<"]         Knight["<<myKnight->getplayerOrderNum()<<"]        *\n";//2
    std::cout<< "*           HP:"<<myMage->getHealth() <<"          HP:"<<myArcher->getHealth() <<"              HP:"<<myThief->getHealth()<<"          HP:"<<myKnight->getHealth()<<"            *\n";//3
    std::cout<< "*           SP:"<<myMage->getSpecialPoints() <<"           SP:"<<myArcher->getSpecialPoints() <<"               SP:"<<myThief->getSpecialPoints()<<"           SP:"<<myKnight->getSpecialPoints()<<"             *\n";//4
    std::cout<< "*                                                                                 *\n";//5
    std::cout<< "*                                                                                 *\n";//6
    std::cout<< "*   Player "<<playerAttack <<" rolled a "<<diceRoll<<" attacking player "<<playerDefend<<"                                       *\n";//7
    std::cout<< "*                                                                                 *\n";//8
    std::cout<< "*     "<<knightInv1 <<"                                                  "<<knightInv2 <<"          *\n";//9
    std::cout<< "*          (1)                                                       (2)          *\n";//10
    std::cout<< "*     "<<knightInv3 <<"                                                                       *\n";//11
    std::cout<< "*          (3)                                                                    *\n";//12
    std::cout<< "***********************************************************************************\n";//13
    return playerChoice.inventoryChoice();
}

int Menu::menuMageInvChoice(int playerAttack, int playerDefend, int diceRoll){
    system("clear"); //Clears terminal screen
    std::cout<< "***********************************************************************************\n";//1
    std::cout<< "*            Mage["<<myMage->getplayerOrderNum()<<"]         Archer["<<myArcher->getplayerOrderNum()<<"]          Thief["<<myThief->getplayerOrderNum()<<"]         Knight["<<myKnight->getplayerOrderNum()<<"]        *\n";//2
    std::cout<< "*           HP:"<<myMage->getHealth() <<"          HP:"<<myArcher->getHealth() <<"              HP:"<<myThief->getHealth()<<"          HP:"<<myKnight->getHealth()<<"            *\n";//3
    std::cout<< "*           SP:"<<myMage->getSpecialPoints() <<"           SP:"<<myArcher->getSpecialPoints() <<"               SP:"<<myThief->getSpecialPoints()<<"           SP:"<<myKnight->getSpecialPoints()<<"             *\n";//4
    std::cout<< "*                                                                                 *\n";//5
    std::cout<< "*                                                                                 *\n";//6
    std::cout<< "*   Player "<<playerAttack <<" rolled a "<<diceRoll<<" attacking player "<<playerDefend<<"                                       *\n";//7
    std::cout<< "*                                                                                 *\n";//8
    std::cout<< "*     "<<mageInv1 <<"                                      "<<mageInv2 <<"            *\n";//9
    std::cout<< "*          (1)                                                       (2)          *\n";//10
    std::cout<< "*     "<<mageInv3 <<"                                                              *\n";//11
    std::cout<< "*          (3)                                                                    *\n";//12
    std::cout<< "***********************************************************************************\n";//13
    return playerChoice.inventoryChoice();
}

int Menu::menuThiefInvChoice(int playerAttack, int playerDefend, int diceRoll){
    system("clear"); //Clears terminal screen
    std::cout<< "***********************************************************************************\n";//1
    std::cout<< "*            Mage["<<myMage->getplayerOrderNum()<<"]         Archer["<<myArcher->getplayerOrderNum()<<"]          Thief["<<myThief->getplayerOrderNum()<<"]         Knight["<<myKnight->getplayerOrderNum()<<"]        *\n";//2
    std::cout<< "*           HP:"<<myMage->getHealth() <<"          HP:"<<myArcher->getHealth() <<"              HP:"<<myThief->getHealth()<<"          HP:"<<myKnight->getHealth()<<"            *\n";//3
    std::cout<< "*           SP:"<<myMage->getSpecialPoints() <<"           SP:"<<myArcher->getSpecialPoints() <<"               SP:"<<myThief->getSpecialPoints()<<"           SP:"<<myKnight->getSpecialPoints()<<"             *\n";//4
    std::cout<< "*                                                                                 *\n";//5
    std::cout<< "*                                                                                 *\n";//6
    std::cout<< "*   Player "<<playerAttack <<" rolled a "<<diceRoll<<" attacking player "<<playerDefend<<"                                       *\n";//7
    std::cout<< "*                                                                                 *\n";//8
    std::cout<< "*     "<<thiefInv1 <<"                                                 "<<thiefInv2 <<"             *\n";//9
    std::cout<< "*          (1)                                                       (2)          *\n";//10
    std::cout<< "*     "<<thiefInv3 <<"                                                                    *\n";//11
    std::cout<< "*          (3)                                                                    *\n";//12
    std::cout<< "***********************************************************************************\n";//13
    return playerChoice.inventoryChoice();
}

void Menu::menuTrophyCeremony(int playerWinner, int playerMageDMG, int playerArcherDMG, int playerThiefDMG, int playerKnightDMG){
    system("clear"); //Clears terminal screen
    std::cout<< "***********************************************************************************\n";//1
    std::cout<< "*            Mage["<<myMage->getplayerOrderNum()<<"]         Archer["<<myArcher->getplayerOrderNum()<<"]          Thief["<<myThief->getplayerOrderNum()<<"]         Knight["<<myKnight->getplayerOrderNum()<<"]        *\n";//2
    std::cout<< "*           HP:"<<myMage->getHealth() <<"          HP:"<<myArcher->getHealth() <<"              HP:"<<myThief->getHealth()<<"          HP:"<<myKnight->getHealth()<<"            *\n";//3
    std::cout<< "*           DMG:"<<playerMageDMG <<"         DMG:"<<playerArcherDMG <<"             DMG:"<<playerThiefDMG<<"         DMG:"<<playerKnightDMG<<"            *\n";//4
    std::cout<< "*                            (Enter anything to continue)                         *\n";//5
    std::cout<< "*                                ============                                     *\n";//6
    std::cout<< "*                                 \\  0  0  /                                      *\n";//7
    std::cout<< "*                                  \\   0  /                                       *\n";//8
    std::cout<< "*                                   \\ 0  /                                        *\n";//9
    std::cout<< "*                                    \\  /                                         *\n";//10
    std::cout<< "*                                     \\/                                          *\n";//11
    std::cout<< "*                              Player "<<playerWinner<<"  wins                                     *\n";//12
    std::cout<< "***********************************************************************************\n";//13
}

void Menu::playAgain(){
    std::cout<< "***********************************************************************************\n";//1
    std::cout<< "*                                                                                 *\n";//2
    std::cout<< "*                                                                                 *\n";//3
    std::cout<< "*                                                                                 *\n";//4
    std::cout<< "*                                                                                 *\n";//5
    std::cout<< "*                             Thank YOU  for Playing!!!                           *\n";//6
    std::cout<< "*                                                                                 *\n";//7
    std::cout<< "*                                                                                 *\n";//8
    std::cout<< "*                                                                                 *\n";//9
    std::cout<< "*                                                                                 *\n";//10
    std::cout<< "*                                                                                 *\n";//11
    std::cout<< "*                                                                                 *\n";//12
    std::cout<< "***********************************************************************************\n";//13
}
int Menu::chooseWhoAttack(int pNum){
    std::cout << "Player " << pNum << "\n";
    return playerChoice.chooseWhoToAttack();
}//system("clear")