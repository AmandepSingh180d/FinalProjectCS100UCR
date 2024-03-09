#include "gtest/gtest.h"
#include "../../inventoryClass/Inventory.h"
#include "../../character/character.h"
#include "../../characterTypes/Archer.h"
#include "../../characterTypes/Knight.h"
#include "../../characterTypes/Mage.h"
#include "../../characterTypes/Thief.h"

TEST(TestInventory, testItemKnightReturn) {
    Inventory inv1;
    Knight knight;

    int number = 1;

    std::vector<std::string> items = knight.getInventory(); 

    ASSERT_EQ(inv1.checkInventory(number, knight), items.at(0));
}

TEST(TestInventory, testItemMageReturn) {
    Inventory inv1;
    Mage mage;

    int number = 1;

    std::vector<std::string> items = mage.getInventory(); 

    ASSERT_EQ(inv1.checkInventory(number, mage), items.at(0));
}

TEST(TestInventory, testItemArcherReturn) {
    Inventory inv1;
    Archer archer;

    int number = 1;

    std::vector<std::string> items = archer.getInventory(); 

    ASSERT_EQ(inv1.checkInventory(number, archer), items.at(0));
}

TEST(TestInventory, testItemThiefReturn) {
    Inventory inv1;
    Thief thief;

    int number = 1;

    std::vector<std::string> items = thief.getInventory(); 

    ASSERT_EQ(inv1.checkInventory(number, thief), items.at(0));
}

TEST(TestInventory, TestBadUserInput) {
    Inventory inv1;
    Knight knight;

    int number = 4;

    std::vector<std::string> items = knight.getInventory();

    ASSERT_THROW(inv1.checkInventory(number, knight), std::out_of_range);

}

TEST(TestInventory, TestGoodInput) { //Want to fail
    Inventory inv1;
    Knight knight;

    int number = 3;

    std::vector<std::string> items = knight.getInventory();

    ASSERT_THROW(inv1.checkInventory(number, knight), std::out_of_range);

}

TEST(TestInventory, testNoThrow) {
    Inventory inv1;
    Knight knight;

    int number = 1;

    //std::vector<std::string> items = knight.getInventory(); 

    ASSERT_NO_THROW(std::vector<std::string> items = knight.getInventory()); 
}


TEST(TestInventory, testUseInventory) {
    Inventory inv1;
    Knight knight;

    int number = 1;

    std::vector<std::string> items = knight.getInventory();

    int useInventory = inv1.useInventory(number, knight);

    EXPECT_EQ(useInventory, -20);
}