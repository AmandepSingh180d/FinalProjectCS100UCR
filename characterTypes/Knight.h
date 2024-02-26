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
        std::vector<std::string> Inventory;
        std::vector<std::string> SPAttackList {"Horse Charge", "Double Slice", "Halberd Attack"};
        std::vector<std::string> listOfInventory {"Shield", "Steak", "Stew", "Pistol", "SP Refill", "AttackUp"};

    public: 
        Knight();
        virtual int getHealth();
        virtual void setHealth(int);
        virtual int getSpecialPoints();
        virtual void setSpecialPoints(int);
        virtual void setInventory();
        virtual std::vector<std::string> getInventory();
        int randomizer();
        virtual std::vector<std::string> getSpecialAttack();


};


#endif //KNIGHT_H