#include<vector>
#include<iostream>
#include<string>
#include"statManager.h"

statManager::statManager() : playerDmg{0, 0, 0, 0} {}

void statManager::updateStats(int playerNum, int dmg) {
    if (playerNum == 1) {
        playerDmg.at(0) += dmg;
    }
    else if (playerNum == 2) {
        playerDmg.at(1) += dmg;
    }
    else if (playerNum == 3) {
        playerDmg.at(2) += dmg;
    }
    else if (playerNum == 4) {
        playerDmg.at(3) += dmg;
    }
}

vector<int> statManager::sendStats () {
    return playerDmg;
}