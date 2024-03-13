CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

project(Fantasy_Brawl)
ADD_EXECUTABLE(Fantasy_Brawl
    game.cpp
    ../attackPlayer/archerAttack.cpp
    ../attackPlayer/attack.cpp
    ../attackPlayer/knightAttack.cpp
    ../attackPlayer/mageAttack.cpp
    ../attackPlayer/thiefAttack.cpp
    ../character/character.cpp
    ../characterTypes/Archer.cpp
    ../characterTypes/Knight.cpp
    ../characterTypes/Mage.cpp
    ../characterTypes/Thief.cpp
    ../choiceClass/Choice.cpp
    ../inventoryClass/Inventory.cpp
    ../menu/menu.cpp
    ../playerManager/playerManagement.cpp
    ../statManagerClass/statManager.cpp
    ../diceRoll/diceRoll.cpp
)
