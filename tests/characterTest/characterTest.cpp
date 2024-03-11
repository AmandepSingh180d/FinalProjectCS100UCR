#include "gtest/gtest.h"
#include "../../character/character.h"
#include "../../characterTypes/Knight.h"
#include "../../characterTypes/Mage.h"
#include "../../characterTypes/Archer.h"
#include "../../characterTypes/Thief.h"



TEST(TestCharacters, TestKnightHealth) {
    Knight knight;

    int health = 100;

    ASSERT_EQ(knight.getHealth(), health);
}

TEST(TestCharacters, TestKnightSP) {
    Knight knight;

    int SP= 20;

    ASSERT_EQ(knight.getSpecialPoints(), SP);
}

TEST(TestCharacters, TestKnightSettingHealth) {
    Knight knight;

    int expectedHealth = 90;

    int knightHealthBefore = knight.getHealth();

    knight.setHealth(knightHealthBefore-10);

    ASSERT_EQ(knight.getHealth(), expectedHealth);
}

TEST(TestCharacters, TestKnightSettingSP) {
    Knight knight;

    int expectedSP = 10;

    int knightSPBefore = knight.getSpecialPoints();

    knight.setSpecialPoints(knightSPBefore-10);

    ASSERT_EQ(knight.getSpecialPoints(), expectedSP);
}

TEST(TestCharacters, TestKnightOrderNum) {
    Knight knight;
    int orderNum = 1;  

    knight.setplayerOrderNum(1);


    ASSERT_EQ(knight.getplayerOrderNum(), orderNum);
}

//All Character Special Attack Tests
TEST(TestCharacters, TestKnightSpecialAttacks) {
    Knight knight;
    std::vector<std::string> SPAttackList {"Horse Charge", "Double Slice", "Halberd Attack"}; 

    ASSERT_EQ(knight.getSpecialAttack(), SPAttackList);
}

TEST(TestCharacters, TestMageSpecialAttacks) {
    Mage mage;
    std::vector<std::string> SPAttackList {"Fireball Barrage", "Lightning Shot", "Draco Meteor"};

    ASSERT_EQ(mage.getSpecialAttack(), SPAttackList);
}

TEST(TestCharacters, TestArcherSpecialAttacks) {
    Archer archer;
    std::vector<std::string> SPAttackList = {"Arrow Barrage","Large Arrow","Explosive Arrow"}; 

    ASSERT_EQ(archer.getSpecialAttack(), SPAttackList);
}

TEST(TestCharacters, TestThiefSpecialAttacks) {
    Thief thief;
    std::vector<std::string> SPAttackList = {"3x Stab","Shin destroyer","Backstab"};

    ASSERT_EQ(thief.getSpecialAttack(), SPAttackList);
}

//No Throw
TEST(TestCharacter, TestNoThrowConstructor) {
    ASSERT_NO_THROW(Knight knight);
}

TEST(TestCharacter, TestKnightTrue) {
    Knight knight;
    ASSERT_TRUE(knight.getHealth());
}

TEST(TestCharacter, TestNoThrowGetHealth) {
    Knight knight;

    int newHealth = 90;

    ASSERT_NO_THROW(knight.setHealth(newHealth));
}