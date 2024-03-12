#include "playerManagement.h"
#include <algorithm>
#include <random>
#include <vector>

void PlayerManager::callAttack(int atkType, int pNum, int atkPNum){
    int dmgNum = 0;
    int spNum = 0;
    //for mage
    if(pNum == pMage->getplayerOrderNum()){
        if (atkType == 1){
            dmgNum = mAtk.basicAttack();
            dmgNum+=pDice;
        }
        else if (atkType == 2){
            dmgNum = mAtk.specialAttack(pMage->getSpecialPoints(), 1, pDice);
            pMage->setSpecialPoints(pMage->getSpecialPoints()-5);
        }
        else if (atkType == 3){
            dmgNum = mAtk.specialAttack(pMage->getSpecialPoints(), 2, pDice);
            pMage->setSpecialPoints(pMage->getSpecialPoints()-10);
        }
        else if (atkType == 4){
            dmgNum = mAtk.specialAttack(pMage->getSpecialPoints(), 3, pDice);
            pMage->setSpecialPoints(pMage->getSpecialPoints()-15);
        }
    }

    //for archer
    else if(pNum == pArcher->getplayerOrderNum()){
        if (atkType == 1){
            dmgNum = mAtk.basicAttack();
            dmgNum+=pDice;
        }
        else if (atkType == 2){
            dmgNum = mAtk.specialAttack(pArcher->getSpecialPoints(), 1, pDice);
            pArcher->setSpecialPoints(pArcher->getSpecialPoints()-5);
        }
        else if (atkType == 3){
            dmgNum = mAtk.specialAttack(pArcher->getSpecialPoints(), 2, pDice);
            pArcher->setSpecialPoints(pArcher->getSpecialPoints()-10);
        }
        else if (atkType == 4){
            dmgNum = mAtk.specialAttack(pArcher->getSpecialPoints(), 3, pDice);
            pArcher->setSpecialPoints(pArcher->getSpecialPoints()-15);
        }
    }

    //for knight
    else if(pNum == pKnight->getplayerOrderNum()){
        if (atkType == 1){
            dmgNum = mAtk.basicAttack();
            dmgNum+=pDice;
        }
        else if (atkType == 2){
            dmgNum = mAtk.specialAttack(pKnight->getSpecialPoints(), 1, pDice);
            pKnight->setSpecialPoints(pKnight->getSpecialPoints()-5);
        }
        else if (atkType == 3){
            dmgNum = mAtk.specialAttack(pKnight->getSpecialPoints(), 2, pDice);
            pKnight->setSpecialPoints(pKnight->getSpecialPoints()-10);
        }
        else if (atkType == 4){
            dmgNum = mAtk.specialAttack(pKnight->getSpecialPoints(), 3, pDice);
            pKnight->setSpecialPoints(pKnight->getSpecialPoints()-15);
        }
    }

    //for thief
    else if(pNum == pThief->getplayerOrderNum()){
        if (atkType == 1){
            dmgNum = mAtk.basicAttack();
            dmgNum+=pDice;
        }
        else if (atkType == 2){
            dmgNum = mAtk.specialAttack(pThief->getSpecialPoints(), 1, pDice);
            pThief->setSpecialPoints(pThief->getSpecialPoints()-5);
        }
        else if (atkType == 3){
            dmgNum = mAtk.specialAttack(pThief->getSpecialPoints(), 2, pDice);
            pThief->setSpecialPoints(pThief->getSpecialPoints()-10);
        }
        else if (atkType == 4){
            dmgNum = mAtk.specialAttack(pThief->getSpecialPoints(), 3, pDice);
            pThief->setSpecialPoints(pThief->getSpecialPoints()-15);
        }
    }

    //apply sp damage
    applyDamage(atkPNum, dmgNum);
}

void PlayerManager::applyDamage(int pNum, int dmg){
    if(pNum == pMage->getplayerOrderNum()){
        pMage->setHealth(pMage->getHealth() - dmg);
    }
    else if(pNum == pArcher->getplayerOrderNum()){
        pArcher->setHealth(pArcher->getHealth() - dmg);
    }
    else if(pNum == pKnight->getplayerOrderNum()){
        pKnight->setHealth(pKnight->getHealth() - dmg);
    }
    else if(pNum == pThief->getplayerOrderNum()){
        pThief->setHealth(pThief->getHealth() - dmg);
    }
}
PlayerManager::PlayerManager(): menu(pArcher, pKnight, pMage, pThief){
    battle();
}
void PlayerManager::callBattleArcher(){
    menu.clearBattleMenu();
    pAttack = pArcher->getplayerOrderNum(); // Change from pMage to pArcher
    pDefend = menu.chooseWhoAttack(pAttack);
    pDice = rollDice.rollDice();
    actionChoice=menu.menuBattleChoice(pAttack,pDefend,pDice);
    if (actionChoice == 1) {
        callAttack(1, pAttack, pDefend);
    } else if (actionChoice == 2) {
        // callSpecialAttack
        spChoice = menu.menuArcherSPChoice(pAttack, pDefend, pDice); // Change from menuMageSPChoice to menuArcherSPChoice
        if (spChoice == 1) {
            // callSPattack
            callAttack(2, pAttack, pDefend);
        } else if (spChoice == 2) {
            // callSPattack
            callAttack(3, pAttack, pDefend);
        } else if (spChoice == 3) {
            // callSPattack
            callAttack(4, pAttack, pDefend);
        }
    } else if (actionChoice == 3) {
        invChoice = menu.menuArcherInvChoice(pAttack, pDefend, pDice); // Change from menuMageInvChoice to menuArcherInvChoice
        if (invChoice == 1) {
            // CallInv
        } else if (invChoice == 2) {
            // callInv
        } else if (invChoice == 3) {
            // callInv
        }
    } else if (actionChoice == 4) {
        // self attack
    }

}
void PlayerManager::callBattleKnight(){
    menu.clearBattleMenu();
    pAttack = pKnight->getplayerOrderNum(); // Change from pMage to pArcher
    pDefend = menu.chooseWhoAttack(pAttack);
    pDice = rollDice.rollDice();
    actionChoice=menu.menuBattleChoice(pAttack,pDefend,pDice);
    if (actionChoice == 1) {
        // callAttack();
        callAttack(1, pAttack, pDefend);
    } else if (actionChoice == 2) {
        // callSpecialAttack
        spChoice = menu.menuKnightSPChoice(pAttack, pDefend, pDice); // Change from menuArcherSPChoice to menuKnightSPChoice
        if (spChoice == 1) {
            // callSPattack
            callAttack(2, pAttack, pDefend);
        } else if (spChoice == 2) {
            // callSPattack
            callAttack(3, pAttack, pDefend);
        } else if (spChoice == 3) {
            // callSPattack
            callAttack(4, pAttack, pDefend);
        }
    } else if (actionChoice == 3) {
        invChoice = menu.menuKnightInvChoice(pAttack, pDefend, pDice); // Change from menuArcherInvChoice to menuKnightInvChoice
        if (invChoice == 1) {
            // CallInv
        } else if (invChoice == 2) {
            // callInv
        } else if (invChoice == 3) {
            // callInv
        }
    } else if (actionChoice == 4) {
        // self attack
    }

}
void PlayerManager::callBattleThief(){
    menu.clearBattleMenu();
    pAttack = pThief->getplayerOrderNum(); // Change from pMage to pArcher
    pDefend = menu.chooseWhoAttack(pAttack);
    pDice = rollDice.rollDice();
    actionChoice=menu.menuBattleChoice(pAttack,pDefend,pDice);
    if (actionChoice == 1) {
        // callAttack();
        callAttack(1, pAttack, pDefend);
    } else if (actionChoice == 2) {
        // callSpecialAttack
        spChoice = menu.menuThiefSPChoice(pAttack, pDefend, pDice); // Change from menuArcherSPChoice to menuThiefSPChoice
        if (spChoice == 1) {
            // callSPattack
            callAttack(2, pAttack, pDefend);
        } else if (spChoice == 2) {
            // callSPattack
            callAttack(3, pAttack, pDefend);
        } else if (spChoice == 3) {
            // callSPattack
            callAttack(4, pAttack, pDefend);
        }
    } else if (actionChoice == 3) {
        invChoice = menu.menuThiefInvChoice(pAttack, pDefend, pDice); // Change from menuArcherInvChoice to menuThiefInvChoice
        if (invChoice == 1) {
            // CallInv
        } else if (invChoice == 2) {
            // callInv
        } else if (invChoice == 3) {
            // callInv
        }
    } else if (actionChoice == 4) {
        // self attack
    }
}

void PlayerManager::callBattleMage(){
    menu.clearBattleMenu();
    pAttack = pMage->getplayerOrderNum(); // Change from pMage to pArcher
    pDefend = menu.chooseWhoAttack(pAttack);
    pDice = rollDice.rollDice();
    actionChoice=menu.menuBattleChoice(pAttack,pDefend,pDice);
    
    if(actionChoice==1){
        //callAttack();
        callAttack(1, pAttack, pDefend);
    }
    else if(actionChoice==2){
        //callSpecialAttack
        spChoice=menu.menuMageSPChoice(pAttack,pDefend,pDice);
        if(spChoice == 1){
            //callSPattack
            callAttack(2, pAttack, pDefend);
        }
        else if (spChoice == 2){
            //callSPattack
            callAttack(3, pAttack, pDefend);
        }
        else if (spChoice == 3){
            //callSPattack
            callAttack(4, pAttack, pDefend);
        }
    }
    else if(actionChoice == 3){
        invChoice = menu.menuMageInvChoice(pAttack,pDefend,pDice);
        if(invChoice == 1){
            //CallInv
        }
        else if (invChoice == 2){
            //callInv
        }
        else if (invChoice == 3){
            //callInv
        }
    }
    else if(actionChoice == 4){
        //self attack
    }
}
void PlayerManager::battle(){
    //Begin and initialize playerVals
    menu.menuTitleScreen();
    int charChoice = menu.menuCharacterScreen(1);
    setPlayerCharChoice(1,charChoice);
    charChoice = menu.menuCharacterScreen(2);
    setPlayerCharChoice(2,charChoice);
    charChoice = menu.menuCharacterScreen(3);
    setPlayerCharChoice(3,charChoice);
    charChoice = menu.menuCharacterScreen(4);
    setPlayerCharChoice(4,charChoice);
    //setting order
    setOrder();
    //loop
    int order=0;
    while(end!=true){
        order = getPlayerOrder();
        fixPlayerSPHP();
        endCheck();
        if(order == pMage->getPlayerRotation()){
            if(pMage->getHealth()<=0){
                p1Dead=true;
            }
            else{
                callBattleMage();
            } 
        }
        else if(order == pArcher->getPlayerRotation()){
            if(pArcher->getHealth()<=0){
                p2Dead=true;
            }
            else{
                callBattleArcher();
            }
        }
        else if(order == pKnight->getPlayerRotation()){
            if(pKnight->getHealth() <= 0){
                p3Dead=true;
            }
            else{
                callBattleKnight();
            }
        }
        else if(order == pThief->getPlayerRotation()){
            if(pThief->getHealth()<=0){
                p4Dead=true;
            }
            else{
                callBattleThief();
            }
        }
    }
    fixPlayerSPHP();
    int winPlayer = findWinner();
    menu.menuTrophyCeremony(winPlayer,1,1,1,1);//1's are temp
    menu.playAgain();
    //tempTrophy
}
void PlayerManager::setPlayerCharChoice(int userNum, int charChoice){
    if(charChoice ==1){
        pMage->setplayerOrderNum(userNum);
    }
    else if(charChoice==2){
        pArcher->setplayerOrderNum(userNum);
    }
    else if(charChoice==3){
        pThief->setplayerOrderNum(userNum);
    }
    else if(charChoice==4){
        pKnight->setplayerOrderNum(userNum);
    }
}

int PlayerManager::getPlayerOrder(){
    playerOrder++;
    if(playerOrder % 5 == 0){
        playerOrder=1;
    }
    return playerOrder; 
}
void PlayerManager::setOrder(){
    std::vector<int> numbers = {1, 2, 3, 4};
    //https://www.geeksforgeeks.org/how-to-shuffle-a-vector-in-cpp/ used to randomize the vector
    random_device rd; 
    mt19937 g(rd()); 
    std::shuffle(numbers.begin(),numbers.end(),g);
    for(int i=0; i<4; i++){
        if(i==0){
            pArcher->setPlayerRotation(numbers[i]);
        }
        else if(i==1){
            pMage->setPlayerRotation(numbers[i]);
        }
        else if(i==2){
            pKnight->setPlayerRotation(numbers[i]);
        }
        else if(i==3){
            pThief->setPlayerRotation(numbers[i]);
        }
    }
}
void PlayerManager::fixPlayerSPHP(){
    if(pThief->getHealth()<0){
        pThief->setHealth(0);
    }
    if(pThief->getSpecialPoints()<0){
        pThief->setSpecialPoints(0);
    }
    if(pArcher->getHealth()<0){
        pArcher->setHealth(0);
    }
    if(pArcher->getSpecialPoints()<0){
        pArcher->setSpecialPoints(0);
    }
    if(pMage->getHealth() < 0) {
    pMage->setHealth(0);
    }
    if(pMage->getSpecialPoints() < 0) {
        pMage->setSpecialPoints(0);
    }
    if(pKnight->getHealth() < 0) {
        pKnight->setHealth(0);
    }
    if(pKnight->getSpecialPoints() < 0) {
        pKnight->setSpecialPoints(0);
    }
}
void PlayerManager::endCheck(){
    int trueCount = p1Dead + p2Dead + p3Dead + p4Dead;
    if(trueCount == 3){
        end=true;
    }
    else{
        end=false;
    }
}
int PlayerManager::findWinner(){
    if(pArcher->getHealth()!=0){
        return pArcher->getplayerOrderNum();
    }
    else if(pMage->getHealth()!=0){
        return pMage->getplayerOrderNum();
    }
    else if(pKnight->getHealth()!=0){
        return pKnight->getplayerOrderNum();
    }
    else if(pThief->getHealth()!=0){
        return pThief->getplayerOrderNum();
    }
    return 0;
}