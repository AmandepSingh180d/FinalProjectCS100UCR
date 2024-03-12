#include "playerManagement.h"
#include <algorithm>
#include <random>
#include <vector>

PlayerManager::PlayerManager(): menu(pArcher, pKnight, pMage, pThief){
    battle();
}
void PlayerManager::callBattleArcher(){
    pAttack = pArcher->getplayerOrderNum(); // Change from pMage to pArcher
    pDefend = menu.chooseWhoAttack(pAttack);
    pDice = rollDice.rollDice();
    actionChoice = menu.menuBattleChoice(pAttack, pDefend, pDice);
    if (actionChoice == 1) {
        // callAttack();
    } else if (actionChoice == 2) {
        // callSpecialAttack
        spChoice = menu.menuArcherSPChoice(pAttack, pDefend, pDice); // Change from menuMageSPChoice to menuArcherSPChoice
        if (spChoice == 1) {
            // callSPattack
        } else if (spChoice == 2) {
            // callSPattack
        } else if (spChoice == 3) {
            // callSPattack
        }
    } else if (actionChoice == 3) {
        invChoice = menu.menuArcherInvChoice(pAttack, pDefend, pDice); // Change from menuMageInvChoice to menuArcherInvChoice
        if (invChoice == 1) {
            // CallInv
            std::cout << "HELP" << std::endl;
            int itemNum = inventory.useInventory(invChoice, pArcher);
            itemUse(itemNum, pArcher);
            

        } else if (invChoice == 2) {
            // callInv
            std::cout << "HELP 2" << std::endl;
            int itemNum = inventory.useInventory(invChoice, pArcher);
            itemUse(itemNum, pArcher);

        } else if (invChoice == 3) {
            // callInv
            std::cout << "HELP 3" << std::endl;
            int itemNum = inventory.useInventory(invChoice, pArcher);
            itemUse(itemNum, pArcher);
            
        }
    } else if (actionChoice == 4) {
        // self attack
    }

}
void PlayerManager::callBattleKnight(){
    pAttack = pKnight->getplayerOrderNum(); // Change from pArcher to pKnight
    pDefend = menu.chooseWhoAttack(pAttack);
    pDice = rollDice.rollDice();
    actionChoice = menu.menuBattleChoice(pAttack, pDefend, pDice);
    if (actionChoice == 1) {
        // callAttack();
    } else if (actionChoice == 2) {
        // callSpecialAttack
        spChoice = menu.menuKnightSPChoice(pAttack, pDefend, pDice); // Change from menuArcherSPChoice to menuKnightSPChoice
        if (spChoice == 1) {
            // callSPattack
        } else if (spChoice == 2) {
            // callSPattack
        } else if (spChoice == 3) {
            // callSPattack
        }
    } else if (actionChoice == 3) {
        invChoice = menu.menuKnightInvChoice(pAttack, pDefend, pDice); // Change from menuArcherInvChoice to menuKnightInvChoice
        if (invChoice == 1) {
            // CallInv
            std::cout << "HELP" << std::endl;
            int itemNum = inventory.useInventory(invChoice, pKnight);
            itemUse(itemNum, pKnight);
        } else if (invChoice == 2) {
            // callInv
            std::cout << "HELP 2" << std::endl;
            int itemNum = inventory.useInventory(invChoice, pKnight);
            itemUse(itemNum, pKnight);
        } else if (invChoice == 3) {
            // callInv
            std::cout << "HELP 3" << std::endl;
            int itemNum = inventory.useInventory(invChoice, pKnight);
            itemUse(itemNum, pKnight);
        }
    } else if (actionChoice == 4) {
        // self attack
    }

}
void PlayerManager::callBattleThief(){
    pAttack = pThief->getplayerOrderNum(); // Change from pArcher to pThief
    pDefend = menu.chooseWhoAttack(pAttack);
    pDice = rollDice.rollDice();
    actionChoice = menu.menuBattleChoice(pAttack, pDefend, pDice);
    if (actionChoice == 1) {
        // callAttack();
    } else if (actionChoice == 2) {
        // callSpecialAttack
        spChoice = menu.menuThiefSPChoice(pAttack, pDefend, pDice); // Change from menuArcherSPChoice to menuThiefSPChoice
        if (spChoice == 1) {
            // callSPattack
        } else if (spChoice == 2) {
            // callSPattack
        } else if (spChoice == 3) {
            // callSPattack
        }
    } else if (actionChoice == 3) {
        invChoice = menu.menuThiefInvChoice(pAttack, pDefend, pDice); // Change from menuArcherInvChoice to menuThiefInvChoice
        if (invChoice == 1) {
            // CallInv
            std::cout << "HELP" << std::endl;
            int itemNum = inventory.useInventory(invChoice, pThief);
            itemUse(itemNum, pThief);

        } else if (invChoice == 2) {
            // callInv
            std::cout << "HELP 2" << std::endl;
            int itemNum = inventory.useInventory(invChoice, pThief);
            itemUse(itemNum, pThief);
        } else if (invChoice == 3) {
            // callInv
            std::cout << "HELP 3" << std::endl;
            int itemNum = inventory.useInventory(invChoice, pThief);
            itemUse(itemNum, pThief);
        }
    } else if (actionChoice == 4) {
        // self attack
    }
}

void PlayerManager::callBattleMage(){
    pAttack=pMage->getplayerOrderNum();
    pDefend=menu.chooseWhoAttack(pAttack);
    pDice=rollDice.rollDice();
    actionChoice=menu.menuBattleChoice(pAttack,pDefend,pDice);
    if(actionChoice==1){
        //callAttack();
    }
    else if(actionChoice==2){
        //callSpecialAttack
        spChoice=menu.menuMageSPChoice(pAttack,pDefend,pDice);
        if(spChoice == 1){
            //callSPattack
        }
        else if (spChoice == 2){
            //callSPattack
        }
        else if (spChoice == 3){
            //callSPattack
        }
    }
    else if(actionChoice == 3){
        invChoice = menu.menuMageInvChoice(pAttack,pDefend,pDice);
        if(invChoice == 1){
            //CallInv
            std::cout << "HELP" << std::endl;
            int itemNum = inventory.useInventory(invChoice, pMage);
            itemUse(itemNum, pMage);
        }
        else if (invChoice == 2){
            //callInv
            std::cout << "HELP 2" << std::endl;
            int itemNum = inventory.useInventory(invChoice, pMage);
            itemUse(itemNum, pMage);
        }
        else if (invChoice == 3){
            //callInv
            std::cout << "HELP 3" << std::endl;
            int itemNum = inventory.useInventory(invChoice, pMage);
            itemUse(itemNum, pMage);
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
        pKnight->setplayerOrderNum(userNum);
    }
    else if(charChoice==3){
        pThief->setplayerOrderNum(userNum);
    }
    else if(charChoice==4){
        pArcher->setplayerOrderNum(userNum);
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
        std::cout << "Player Used Smaller Heal" << std::endl;
       // std::cout << "Player " << character->getplayerOrderNum() << "used " <<   
        character->setHealth(newHealth);
        menu.menuBattleChoice(pAttack, pDefend, pDice);
    }

    else if (itemNumber == 2) {
        std::cout << "Player Used Better Heal" << std::endl;
        int newHealth = character->getHealth() + 30;
        character->setHealth(newHealth);
        menu.menuBattleChoice(pAttack, pDefend, pDice);

    }

    else if (itemNumber == 3) {
        std::cout << "Player Used SP Refill" << std::endl;
        int newSP = character->getSpecialPoints() + 5;
        character->setSpecialPoints(newSP);
        menu.menuBattleChoice(pAttack, pDefend, pDice);
    } 

    else if (itemNumber == 4) {
        std::cout << "Player Used Better SP Refill" << std::endl;
        int newSP = character->getSpecialPoints() + 10;
        character->setSpecialPoints(newSP);
    }


    if (itemNumber == 5) {
        std::cout << "Attack" << std::endl;
        //menu.chooseWhoAttack(character->getPlayerOrderNum()) (Dont know if need this)
        //applyDmg(pdefend, 15)
    }
    
    if (itemNumber == 6) {
        std::cout << " Greater Attack" << std::endl;
        //menu.chooseWhoAttack(character->getPlayerOrderNum())

    }
}