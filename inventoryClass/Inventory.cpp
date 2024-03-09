#include "Inventory.h"
#include <iostream>
#include <string>
#include "../choiceClass/Choice.h"

std::string Inventory::checkInventory(int& userChoice, Character& playerCharacter) {
    std::vector<std::string> characterInventory = playerCharacter.getInventory();
    
    // for (int i = 0; i < characterInventory.size(); ++i) {
    //     std::cout << characterInventory.at(i) << ", ";
    // }
    // std::cout << std::endl;

    return characterInventory.at(userChoice-1);
}

//testing output (Will not be here)
void Inventory::printOut(Character& playerCharacter) {
    std::vector<std::string> characterInventory = playerCharacter.getInventory();
    std::cout << "Here is inventory:" << std::endl;

    for (int i = 0; i < characterInventory.size(); ++i) {
        std::cout << characterInventory.at(i) << ", ";
    }
    std::cout << std::endl;
}

// std::string Inventory::deleteInventory(int& userChoice, Character& playerCharacter) {
//     //std::vector<std::string> characterInventory = playerCharacter.getInventory();
//     //std::string itemToDelete = checkInventory(userChoice, playerCharacter);

//     playerCharacter.at(userChoice) = "Not Available"; 
//     //DOES NOT PROPERLY MODIFY ONLY CHANGES CHARACterinventory
//     return playerCharacter;
// }

int Inventory::useInventory(int& userChoice, Character& playerCharacter) {
    std::string item = checkInventory(userChoice, playerCharacter);

    if ( item == "Stew") {
        return 20;
    }

    if (item == "Medium Potion") {
        return 40;
    }

    else if (item == "Dagger") {
        return -20;
    }
    
    else if(item == "Steak") {
        return 30;
    } 
    
    else if (item =="Pistol") {
        return -30;
    }

    else if (item == "SP Refill") {
        return 10;
    }

    else if (item == "Greater SP Refill") {
        return 20;
    }
    
    else if(item == "Small Potion") {
        return 25;
    }

    else if (item == "Crossbow Shot") {
         return -20;
    }

    else if (item == "Long Bow")  {
        return -30;
    }
    else if (item == "Flash Bomb") {
        return -30;
    }

    else if (item == "Harm Potion") {
        return -20;
    }

    else if (item == "Blast Wand") {
        return -25;
    }

    else {
        std::cout << "Not Available" << std::endl;
        return -1;
    }
    
}

// void Inventory::healthItem(int& number, Character& ) {

// }


