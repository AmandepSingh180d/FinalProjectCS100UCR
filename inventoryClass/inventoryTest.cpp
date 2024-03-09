#include "Inventory.h"
#include "../character/character.h"
#include "../characterTypes/Archer.h"
#include "../characterTypes/Knight.h"
#include "../characterTypes/Mage.h"
#include "../characterTypes/Thief.h"
#include "../choiceClass/Choice.h"
#include<vector>
#include<iostream>
#include<string>

int main ()  {

    Knight knight1;
    Choice ch1;
   Inventory inv1;


    
    inv1.printOut(knight1);
    int userInput = ch1.inventoryChoice();
    
 


   

    std::cout << inv1.check/home/csmajs/clope265/final-project-asing241-clope265-btaqu001-schen568/tests/inventoryTests/.gitignoreInventory(userInput, knight1) << std::endl;

    //std::vector<std::string>& KnightInventoryAfterDelete =inv1.deleteInventory(userInput, knight1);

    std::cout << endl << std::endl;

    std::cout << inv1.useInventory(userInput, knight1) << std::endl;

    return 0;
}