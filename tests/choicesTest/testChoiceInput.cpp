#include "gtest/gtest.h"
#include "../choiceClass/Choice.h"

//ACTIONS CHOICE
TEST(TestActionChoice, testGoodInput) {
    Choice c1; 

    int actionChoice = c1.actionChoice();
    EXPECT_TRUE(actionChoice >= 1 && actionChoice <= 4);
}

TEST(TestActionChoice, testBadInput) {
    Choice c1; 

    int actionChoice = c1.actionChoice();
    EXPECT_EQ(actionChoice, actionChoice < 1 || actionChoice > 4); //Expects numbers less than 1 or greater than 4
}

TEST(TestActionChoice, testAlphaInput_a) {
    Choice c1; 

    
    EXPECT_EQ(c1.actionChoice(), 'a');
}


//WHO TO ATTACK CHOICE
TEST(WhoToAttackChoice, testGoodInput) {
    Choice c1; 

    int whoToAttackChoice = c1.chooseWhoToAttack();
    EXPECT_TRUE(whoToAttackChoice >= 1 && whoToAttackChoice <= 4);
}

TEST(WhoToAttackChoice, testBadInput) {
    Choice c1; 

    int whoToAttackChoice = c1.chooseWhoToAttack();
    EXPECT_EQ(whoToAttackChoice, whoToAttackChoice < 1 ||whoToAttackChoice > 4);
}

TEST(WhoToAttackChoice, testAlphaInput_a) {
    Choice c1; 

    
    EXPECT_EQ(c1.chooseWhoToAttack(), 'a');
}


//SPECIAL ATTACK CHOICE
TEST(SpecialAttackChoice, testGoodInput) {
    Choice c1; 

    int specialAttackChoice = c1.specialAttackChoice() ;
    EXPECT_TRUE(specialAttackChoice >= 1 && specialAttackChoice <= 3);
}

TEST(SpecialAttackChoice, testBadInput) {
    Choice c1; 

    int specialAttackChoice  = c1.specialAttackChoice() ;
    EXPECT_EQ(specialAttackChoice, specialAttackChoice < 1 || specialAttackChoice > 3);
}

TEST(SpecialAttackChoice, testAlphaInput_a) {
    Choice c1; 

    
    EXPECT_EQ(c1.specialAttackChoice(), 'a');
}


//INVENTORY CHOICE
TEST(InventoryChoice, testGoodInput) {
    Choice c1; 

    int inventoryChoice = c1.inventoryChoice() ;
    EXPECT_TRUE(inventoryChoice >= 1 && inventoryChoice <= 4);
}

TEST(InventoryChoice, testBadInput) {
    Choice c1; 

    int inventoryChoice  = c1.inventoryChoice() ;
    EXPECT_EQ(inventoryChoice, inventoryChoice < 1 || inventoryChoice > 4);
}

TEST(InventoryChoice, testAlphaInput_a) {
    Choice c1; 

    
    EXPECT_EQ(c1.inventoryChoice(), 'a');
}


//CHARACTER CHOICE
TEST(CharacterChoice, testGoodInput) {
    Choice c1; 

    int characterChoice = c1.characterChoice() ;
    EXPECT_TRUE(characterChoice >= 1 && characterChoice <= 4);
}

TEST(CharacterChoice, testBadInput) {
    Choice c1; 

    int characterChoice  = c1.characterChoice() ;
    EXPECT_EQ(characterChoice, characterChoice < 1 || characterChoice > 4);
}

TEST(CharacterChoice, testAlphaInput_a) {
    Choice c1; 

    
    EXPECT_EQ(c1.characterChoice(), 'a');
}


//END GAME CHOICE
TEST(EndGameChoice, testGoodInput) {
    Choice c1; 

    int endGameChoice = c1.endGameChoice() ;
    EXPECT_TRUE(endGameChoice >= 1 && endGameChoice <= 2);
}

TEST(EndGameChoice, testBadInput) {
    Choice c1; 

    int endGameChoice  = c1.endGameChoice() ;
    EXPECT_EQ(endGameChoice, endGameChoice < 1 || endGameChoice > 2);
}

TEST(EndGameChoice, testAlphaInput_a) {
    Choice c1; 

    
    EXPECT_EQ(c1.endGameChoice(), 'a');
}

