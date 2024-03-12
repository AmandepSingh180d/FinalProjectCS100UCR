#include "gtest/gtest.h"
#include "statManager.h"

class StatManagerTest : public ::testing::Test {
protected:
    void SetUp() override {
        statManagerObj = new statManager();
    }
    void TearDown() override {
        delete statManagerObj;
    }
    statManager* statManagerObj;
};

TEST_F(StatManagerTest, ConstructorTest) {
    vector<int> expectedPlayerDmg = {0, 0, 0, 0};
    EXPECT_EQ(statManagerObj->sendStats(), expectedPlayerDmg);
}
TEST_F(StatManagerTest, UpdateStatsTest) {
    statManagerObj->updateStats(1, 10);
    statManagerObj->updateStats(2, 20);
    statManagerObj->updateStats(3, 30);
    statManagerObj->updateStats(4, 40);

    vector<int> expectedPlayerDmg = {10, 20, 30, 40};
    EXPECT_EQ(statManagerObj->sendStats(), expectedPlayerDmg);
}
TEST_F(StatManagerTest, SendStatsTest) {
    statManagerObj->updateStats(1, 10);
    statManagerObj->updateStats(2, 20);

    vector<int> playerDmg = statManagerObj->sendStats();

    EXPECT_EQ(playerDmg.size(), 4);
    EXPECT_EQ(playerDmg[0], 10);
    EXPECT_EQ(playerDmg[1], 20);
    EXPECT_EQ(playerDmg[2], 0);
    EXPECT_EQ(playerDmg[3], 0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
