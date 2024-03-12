#ifndef STATMANAGER_HPP
#define STATMANAGER_HPP

#include<vector>
#include<iostream>
#include<string>
// #include "../choiceClass/Choice.h"
// #include "../character/character.h"
// #include "../characterTypes/Archer.h"
// #include "../characterTypes/Knight.h"
// #include "../characterTypes/Mage.h"
// #include "../characterTypes/Thief.h"
// #include "../menu/menu.h"
// //#include "../playerManagement/playerManagement.h"

using namespace std;

class statManager {
   private:
    vector<int> playerDmg;
   public:
    statManager();
    void updateStats(int playerNum, int dmg);
    vector<int> sendStats();
};  


#endif