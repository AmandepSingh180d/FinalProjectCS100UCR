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
        std::vector<std::string> Inventory = {"","","",""};
        std::vector<std::string> SPAttackList = {"","","",""};
        std::vector<std::string> listOfInventory = {"SP refill", "HealthUp","AtackUp","Small potion", "Stew","DefenseUp"};

    public:
        virtual int getHealth();
        virtual void setHealth(int newHealth);
        virtual int getSpecialPoints();
        virtual void setSpecialPoints(int newSP);
        virtual std::vector<std::string> getInventory();
        virtual void setInventory();
        int randomizer();
        virtual std::vector<std::string> getSpecialAttack();
};

#endif // ARCHER_H
