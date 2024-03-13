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
        sManage.updateStats(1,dmgNum);
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
        sManage.updateStats(2,dmgNum);
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
        sManage.updateStats(4,dmgNum);
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
        sManage.updateStats(3,dmgNum);
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
            int itemNum = inventory.useInventory(invChoice, pArcher);
            itemUse(itemNum, pArcher);
            

        } else if (invChoice == 2) {
            // callInv
            int itemNum = inventory.useInventory(invChoice, pArcher);
            itemUse(itemNum, pArcher);

        } else if (invChoice == 3) {
            // callInv
            int itemNum = inventory.useInventory(invChoice, pArcher);
            itemUse(itemNum, pArcher);
            
        }
    } else if (actionChoice == 4) {
        // self attack
        std::cout << "The Archer tried to run away but tripped over a rock!" << std::endl << std::endl;
        pArcher->setHealth(pArcher->getHealth() - 10);
        sManage.updateStats(2,10);
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
            int itemNum = inventory.useInventory(invChoice, pKnight);
            itemUse(itemNum, pKnight);
        } else if (invChoice == 2) {
            // callInv
            int itemNum = inventory.useInventory(invChoice, pKnight);
            itemUse(itemNum, pKnight);
        } else if (invChoice == 3) {
            // callInv
            int itemNum = inventory.useInventory(invChoice, pKnight);
            itemUse(itemNum, pKnight);
        }
    } else if (actionChoice == 4) {
        // self attack
        std::cout << "The Knight tried to run away but tripped over his armour!" << std::endl << std::endl;
        pKnight->setHealth(pKnight->getHealth() - 10);
        sManage.updateStats(4,10);
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

            int itemNum = inventory.useInventory(invChoice, pThief);
            itemUse(itemNum, pThief);

        } else if (invChoice == 2) {
            // callInv
            int itemNum = inventory.useInventory(invChoice, pThief);
            itemUse(itemNum, pThief);
        } else if (invChoice == 3) {
            // callInv
            int itemNum = inventory.useInventory(invChoice, pThief);
            itemUse(itemNum, pThief);
        }
    } else if (actionChoice == 4) {
        // self attack
        std::cout << "The Thief tried to run away but felt bad lmao!" << std::endl << std::endl;
        pThief->setHealth(pThief->getHealth() - 10);
        sManage.updateStats(3,10);
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
            int itemNum = inventory.useInventory(invChoice, pMage);
            itemUse(itemNum, pMage);
        }
        else if (invChoice == 2){
            //callInv
            int itemNum = inventory.useInventory(invChoice, pMage);
            itemUse(itemNum, pMage);
        }
        else if (invChoice == 3){
            //callInv
            int itemNum = inventory.useInventory(invChoice, pMage);
            itemUse(itemNum, pMage);
        }
    }
    else if(actionChoice == 4){
        //self attack
        std::cout << "The Mage tried to run away but tripped over their staff (lololol loser)!" << std::endl << std::endl;
        pMage->setHealth(pMage->getHealth() - 10);
        sManage.updateStats(1,10);
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
        endCheck();
    }
    fixPlayerSPHP();
    int winPlayer = findWinner();
    setStats();
    menu.menuTrophyCeremony(winPlayer,mageStat,archerStat,thiefStat,knightStat);//1's are temp
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


void PlayerManager::itemUse(int itemNumber, Character* character) {
    
    if (itemNumber == 1) {
        
        int newHealth = character->getHealth() + 15;
        std::cout << "Player " << pAttack << " Used Smaller Heal!" << std::endl;
        character->setHealth(newHealth);
    }

    else if (itemNumber == 2) {
        std::cout << "Player " << pAttack << " Used Better Heal!" << std::endl;
        int newHealth = character->getHealth() + 25;
        character->setHealth(newHealth);

    }

    else if (itemNumber == 3) {
        std::cout << "Player " << pAttack << " Used SP Refill!" << std::endl;
        int newSP = character->getSpecialPoints() + 5;
        character->setSpecialPoints(newSP);
    } 

    else if (itemNumber == 4) {
        std::cout << "Player " << pAttack << " Used Better SP Refill" << std::endl;
        int newSP = character->getSpecialPoints() + 10;
        character->setSpecialPoints(newSP);
    }

    if (itemNumber == 5) {
        std::cout <<  "Player " << pAttack << "Used Small Attack Item!" << std::endl;
        applyDamage(pDefend, 15);
    }
    
    if (itemNumber == 6) {
        std::cout <<  "Player " << pAttack <<" Used Greater Attack Item!" << std::endl;
        applyDamage(pDefend, 25);

    }
}
void PlayerManager::setStats(){
    std::vector<int> tempStats= sManage.sendStats();
    mageStat=tempStats[0];
    archerStat=tempStats[1];
    thiefStat=tempStats[2];
    knightStat=tempStats[3];
}