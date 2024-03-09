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
        std::vector<std::string> Inventory;
        std::vector<std::string> SPAttackList {"Fireball Barrage", "Lightning Shot", "Draco Meteor"};
        std::vector<std::string> listOfInventory {"Medium Potion", "Harm Potion", "Small Potion", "Blast Wand", "SP Refill", "Greater SP Refill"};

    public:
        Mage();
        virtual int getHealth() const;
        virtual void setHealth(const int& newHealth);
        virtual int getSpecialPoints() const;
        virtual void setSpecialPoints(const int& newSP);
        virtual void setInventory();
        virtual std::vector<std::string> getInventory() const;
        int randomizer();
        virtual std::vector<std::string> getSpecialAttack() const;


};


#endif //MAGE_H