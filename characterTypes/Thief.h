#ifndef THIEF_H
#define THIEF_H

#include <vector>
#include <string>
#include <random>
#include "../character/character.h"

class Thief : public Character {
    private:
        int specialPoints;
        int health;
        int playerRot=0;
        int playerOrderNum=0;
        std::vector<std::string> Inventory;
        std::vector<std::string> SPAttackList = {"3x Stab","Shin destroyer","Backstab"};
        std::vector<std::string> listOfInventory = {"SP Refill", "HealthUp","Dagger","Small Potion", "Stew","Flash Bomb"};

    public:
        Thief();
        virtual int getHealth() const;
        virtual void setHealth(const int& newHealth);
        virtual int getSpecialPoints() const;
        virtual void setSpecialPoints(const int& newSP);
        virtual void setInventory();
        virtual std::vector<std::string> getInventory() const;
        int randomizer();
        virtual std::vector<std::string> getSpecialAttack() const;
        void setplayerOrderNum(int);
        int getplayerOrderNum();
        void setPlayerRotation(int);
        int getPlayerRotation();
};

#endif // THIEF_H
