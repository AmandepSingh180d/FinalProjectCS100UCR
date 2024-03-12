#include "gtest/gtest.h"
#include "../playerManager/playerManagement.h"


TEST(PlayerManagementTest, testBasicAttack) {
    PlayerManagement pm;
    Mage* pMage = new Mage;
    pMage->setHealth(100);
    pm.callAttack(1, pMage->getplayerOrderNum(), pMage->getplayerOrderNum());
    EXPECT_EQ(pMage->getHealth(), 99);
}

TEST(PlayerManagementTest, testAttType2) {
    PlayerManagement pm;
    Mage* pMage = new Mage;
    pMage->setHealth(100);
    pm.callAttack(2, pMage->getplayerOrderNum(), pMage->getplayerOrderNum());
    EXPECT_EQ(pMage->getHealth(), 95);
}

TEST(PlayerManagementTest, testAttType3) {
    PlayerManagement pm;
    Mage* pMage = new Mage;
    pMage->setHealth(100);
    pm.callAttack(3, pMage->getplayerOrderNum(), pMage->getplayerOrderNum());
    EXPECT_EQ(pMage->getHealth(), 90);
}

TEST(PlayerManagementTest, testAttType4) {
    PlayerManagement pm;
    Mage* pMage = new Mage;
    pMage->setHealth(100);
    pm.callAttack(4, pMage->getplayerOrderNum(), pMage->getplayerOrderNum());
    EXPECT_EQ(pMage->getHealth(), 85);
}

TEST(PlayerManagementTest, testApplyDamage) {
    PlayerManagement pm;
    Mage* pMage = new Mage;
    pMage->setHealth(100);
    pm.applyDamage(pMage->getplayerOrderNum(), 10);
    EXPECT_EQ(pMage->getHealth(), 90);
}
