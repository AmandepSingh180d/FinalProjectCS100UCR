CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

ADD_EXECUTABLE(InventoryTesting 

    Inventory.cpp
    inventoryTest.cpp
    ../characterTypes/Knight.cpp
    ../character/character.cpp
    ../choiceClass/Choice.cpp

)