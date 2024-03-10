#ifndef STATMANAGER_H
#define STATMANAGER_H

#include<vector>
#include<iostream>
#include<string>
#include "../choiceClass/Choice.h"
#include "../character/character.h"
#include "../characterTypes/Archer.h"
#include "../characterTypes/Knight.h"
#include "../characterTypes/Mage.h"
#include "../characterTypes/Thief.h"
#include "../menu/menu.h"

using namespace std;

class statManager {
   private: 
    int playerNum;
    int playerDamage;
   public:
    vector<int&> playerDmg
    statManager();
    void updateStats(PlayerManager&, const int&);
};  


#endif