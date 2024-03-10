#ifndef KNIGHT_H
#define KNIGHT_H

#include <vector>
#include <string>
#include <random>
#include "../character/character.h"

class Knight: public Character {
    private:
        int health;
        int specialPoints;
        int playerRot =0;
        int playerOrderNum=0;
        std::vector<std::string> Inventory;
        std::vector<std::string> SPAttackList {"Horse Charge", "Double Slice", "Halberd Attack"};
        std::vector<std::string> listOfInventory {"Dagger", "Steak", "Stew", "Pistol", "SP Refill", "Small Potion"};

    public: 
        Knight();
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


#endif //KNIGHT_H