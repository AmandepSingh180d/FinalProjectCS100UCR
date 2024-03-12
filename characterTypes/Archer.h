#ifndef ARCHER_H
#define ARCHER_H

#include <vector>
#include <string>
#include <random>
#include "../character/character.h"

class Archer : public Character {
    private:
        int specialPoints;
        int health;
        int playerOrderNum=0;
        int playerRot=0;
        std::vector<std::string> Inventory;
        std::vector<std::string> SPAttackList = {"Arrow Barrage","Large Arrow","Explosive Arrow"};
        std::vector<std::string> listOfInventory = {"SP Refill", "Crossbow Shot","Steak","Small Potion", "Stew","Long Bow"};


    public:
        Archer();
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

#endif // ARCHER_H