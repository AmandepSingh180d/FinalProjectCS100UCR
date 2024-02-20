#ifndef THIEF_H
#define THIEF_H

#include <vector>
#include <string>
#include <random>
#include "Character.h"

class Thief : public Character {
    private:
        int specialPoints;
        int health;
        std::vector<std::string> Inventory = {"","","",""};
        std::vector<std::string> listOfInventory = {"SP refill", "HealthUp","AtackUp","Small potion", "Stew","DefenseUp"};

    public:
        virtual int getHealth();
        virtual void setHealth(int newHealth);
        virtual int getSpecialPoints();
        virtual void setSpecialPoints(int newSP);
        virtual std::vector<std::string> getInventory();
        virtual void setInventory(std::vector<std::string> chosenInventory);
        void randomizer();
};

#endif // THIEF_H
