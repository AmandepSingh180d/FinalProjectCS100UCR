#include "gtest/gtest.h"
#include "../attackTest/attack.h"

//test the basicAttack method
TEST(AttackTest, testBasicAttack){
    Attack attack;
    EXPECT_EQ(attack.basicAttack(), 10);
}

// Test the specialAttack method - test insufficient SP
TEST(AttackTest, testInsufficientSpecialAttack) {
    Attack attack;
    EXPECT_EQ(0, attack.specialAttack(4, 1));
    EXPECT_EQ(0, attack.specialAttack(9, 2));
    EXPECT_EQ(0, attack.specialAttack(14, 3));
}

//test the specialAttack method - test sufficient SP/passing test
TEST(AttackTest, testSufficientSpecialAttack){
    Attack attack;
    EXPECT_EQ(20, attack.specialAttack(5, 1));
    EXPECT_EQ(30, attack.specialAttack(10, 2));
    EXPECT_EQ(40, attack.specialAttack(15, 3));
    EXPECT_EQ(20, attack.specialAttack(8, 1)); 
    EXPECT_EQ(30, attack.specialAttack(12, 2)); 
    EXPECT_EQ(40, attack.specialAttack(18, 3));
}

//test the specialAttack method - test invalid choice
TEST(AttackTest, testInvalidChoiceAttack){
    Attack attack;
    EXPECT_EQ(0, attack.specialAttack(4, 3));
    EXPECT_EQ(0, attack.specialAttack(9, 4));
    EXPECT_EQ(0, attack.specialAttack(14, 2));
}