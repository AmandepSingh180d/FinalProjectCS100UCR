#include "Inventory.h"
#include <iostream>
#include <string>
#include "../choiceClass/Choice.h"

std::string Inventory::checkInventory(int& userChoice, Character& playerCharacter) {
    std::vector<std::string> characterInventory = playerCharacter.getInventory();
    
    return characterInventory.at(userChoice-1);
}


int Inventory::useInventory(int& userChoice, Character& playerCharacter) {
    std::string item = checkInventory(userChoice, playerCharacter);

    // 1 for healing items 
    if ( item == "Stew") {
        return 1;
    }

    // 2 for better healing items
    if (item == "Medium Potion") {
        return 2;
    }
    // 5 for attack items 
    else if (item == "Dagger") {
        return 5;
    }
    
    else if(item == "Steak") {
        return 1;
    } 
    
    else if (item =="Pistol") {
        return 5;
    }
    //3 for sp items
    else if (item == "SP Refill") {
        return 3;
    }

    //4 for greater sp items 
    else if (item == "Greater SP Refill") {
        return 4;
    }
    
    else if(item == "Small Potion") {
        return 1;
    }

    else if (item == "Crossbow Shot") {
         return 5;
    }

    else if (item == "Long Bow")  {
        return 5;
    }
    else if (item == "Flash Bomb") {
        return 5;
    }

    else if (item == "Harm Potion") {
        return 5;
    }

    else if (item == "Blast Wand") {
        return 5;
    }

    else {
        std::cout << "Not Available" << std::endl;
        return -1;
    }
    
}



