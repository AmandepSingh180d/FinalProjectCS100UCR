#ifndef MAGE_H
#define MAGE_H

#include <vector>
#include <string>
#include <random>
#include "../character/character.h"

class Mage: public Character {    
    private: 
        int health ;
        int specialPoints;
        std::vector<std::string> Inventory = {"","","",""};
        std::vector<std::string> SPAttackList {"Fireball Barrage", "Lightning Shot", "Draco Meteor"};
        std::vector<std::string> listOfInventory {"Healing Potion", "Defence Potion", "Smaller Healing Potion", "Blast Wand", "SP Refill", "DefenceUp"};

    public:
        virtual int getHealth();
        virtual void setHealth(int);
        virtual int getSpecialPoints();
        virtual void setSpecialPoints(int);
        virtual void setInventory();
        virtual std::vector<std::string> getInventory();
        int randomizer();
        virtual std::vector<std::string> getSpecialAttack();


};


#endif //MAGE_H