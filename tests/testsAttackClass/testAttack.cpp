#include "gtest/gtest.h"
#include "../attackPlayer/attack.h"

//test the basicAttack method
TEST(AttackTest, testBasicAttack){
    Attack attack;
    EXPECT_EQ(attack.basicAttack(), 10);
}

TEST(AttackTest, testArcherAttack) {
    archerAttack aAtk;
    EXPECT_EQ(10,aAtk.basicAttack());
    EXPECT_EQ(0, aAtk.specialAttack(4, 1,10));
    EXPECT_EQ(0, aAtk.specialAttack(9, 2,10));
    EXPECT_EQ(0, aAtk.specialAttack(14, 3,10));
    EXPECT_EQ(30, aAtk.specialAttack(5, 1,10));
    EXPECT_EQ(40, aAtk.specialAttack(10, 2,10));
    EXPECT_EQ(50, aAtk.specialAttack(15, 3,10));
}
TEST(AttackTest, testKnightAttack) {
    knightAttack kAtk;
    EXPECT_EQ(10, kAtk.basicAttack());
    EXPECT_EQ(0, kAtk.specialAttack(4, 1, 10));
    EXPECT_EQ(0, kAtk.specialAttack(9, 2, 10));
    EXPECT_EQ(0, kAtk.specialAttack(14, 3, 10));
    EXPECT_EQ(30, kAtk.specialAttack(5, 1, 10));
    EXPECT_EQ(40, kAtk.specialAttack(10, 2, 10));
    EXPECT_EQ(50, kAtk.specialAttack(15, 3, 10));
}

TEST(AttackTest, testMageAttack) {
    mageAttack mAtk;
    EXPECT_EQ(10, mAtk.basicAttack());
    EXPECT_EQ(0, mAtk.specialAttack(4, 1, 10));
    EXPECT_EQ(0, mAtk.specialAttack(9, 2, 10));
    EXPECT_EQ(0, mAtk.specialAttack(14, 3, 10));
    EXPECT_EQ(30, mAtk.specialAttack(5, 1, 10));
    EXPECT_EQ(40, mAtk.specialAttack(10, 2, 10));
    EXPECT_EQ(50, mAtk.specialAttack(15, 3, 10));
}

TEST(AttackTest, testThiefAttack) {
    thiefAttack tAtk;
    EXPECT_EQ(10, tAtk.basicAttack());
    EXPECT_EQ(0, tAtk.specialAttack(4, 1, 10));
    EXPECT_EQ(0, tAtk.specialAttack(9, 2, 10));
    EXPECT_EQ(0, tAtk.specialAttack(14, 3, 10));
    EXPECT_EQ(30, tAtk.specialAttack(5, 1, 10));
    EXPECT_EQ(40, tAtk.specialAttack(10, 2, 10));
    EXPECT_EQ(50, tAtk.specialAttack(15, 3, 10));
}
