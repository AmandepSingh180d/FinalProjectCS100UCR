cmake_minimum_required(VERSION 3.20)

add_subdirectory(googletest)

ADD_EXECUTABLE(testInventory
    testInventory.cpp
    ../../inventoryClass/Inventory.cpp
    ../../characterTypes/Knight.cpp
    ../../character/character.cpp
    ../../characterTypes/Archer.cpp
    ../../characterTypes/Mage.cpp
    ../../characterTypes/Thief.cpp
)

target_link_libraries(testInventory gmock gtest gtest_main)