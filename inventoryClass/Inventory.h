#ifndef INVENTORY_H
#define iNVENTORY_H

#include<vector>
#include<iostream>
#include<string>
#include "../choiceClass/Choice.h"
#include "../character/character.h"
#include "../characterTypes/Archer.h"
#include "../characterTypes/Knight.h"
#include "../characterTypes/Mage.h"
#include "../characterTypes/Thief.h"

class Inventory {
    private: 
    
    int userChoice;

    public: 

    std::string checkInventory(int& userChoice, Character* playerCharacter);
    int useInventory(int& userChoice, Character* playerCharacter);

};  


#endif