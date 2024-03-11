#include "playerManagement.h"


Mage* pMage = new Mage;
Archer* pArcher = new Archer;
Knight* pKnight = new Knight;
Thief* pThief = new Thief;
mageAttack mAtk;
archerAttack aAtk;
knightAttack kAtk;
thiefAttack tAtk;

void PlayerManagement::callAttack(int atkType, int pNum, int atkPNum){
    int dmgNum = 0;
    int spNum = 0;
    //for mage
    if(pNum == pMage->getplayerOrderNum()){
        if (atkType == 1){
            dmgNum = mAtk.basicAttack();
        }
        else if (atkType == 2){
            dmgNum = mAtk.specialAttack(pMage->getSpecialPoints(), atkType - 1, 10);
        }
        else if (atkType == 3){
            dmgNum = mAtk.specialAttack(pMage->getSpecialPoints(), atkType - 2, 10);
        }
        else if (atkType == 4){
            dmgNum = mAtk.specialAttack(pMage->getSpecialPoints(), atkType - 3, 10);
        }
    }

    //for archer
    else if(pNum == pArcher->getplayerOrderNum()){
        if (atkType == 1){
            dmgNum = mAtk.basicAttack();
        }
        else if (atkType == 2){
            dmgNum = mAtk.specialAttack(pArcher->getSpecialPoints(), atkType - 1, 10);
        }
        else if (atkType == 3){
            dmgNum = mAtk.specialAttack(pArcher->getSpecialPoints(), atkType - 2, 10);
        }
        else if (atkType == 4){
            dmgNum = mAtk.specialAttack(pArcher->getSpecialPoints(), atkType - 3, 10);
        }
    }

    //for knight
    else if(pNum == pKnight->getplayerOrderNum()){
        if (atkType == 1){
            dmgNum = mAtk.basicAttack();
        }
        else if (atkType == 2){
            dmgNum = mAtk.specialAttack(pKnight->getSpecialPoints(), atkType - 1, 10);
        }
        else if (atkType == 3){
            dmgNum = mAtk.specialAttack(pKnight->getSpecialPoints(), atkType - 2, 10);
        }
        else if (atkType == 4){
            dmgNum = mAtk.specialAttack(pKnight->getSpecialPoints(), atkType - 3, 10);
        }
    }

    //for thief
    else if(pNum == pThief->getplayerOrderNum()){
        if (atkType == 1){
            dmgNum = mAtk.basicAttack();
        }
        else if (atkType == 2){
            dmgNum = mAtk.specialAttack(pThief->getSpecialPoints(), atkType - 1, 10);
        }
        else if (atkType == 3){
            dmgNum = mAtk.specialAttack(pThief->getSpecialPoints(), atkType - 2, 10);
        }
        else if (atkType == 4){
            dmgNum = mAtk.specialAttack(pThief->getSpecialPoints(), atkType - 3, 10);
        }
    }

    //apply sp damage
    applyDamage(atkPNum, dmgNum);
}

void PlayerManagement::applyDamage(int pNum, int dmg){
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