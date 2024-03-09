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
        int playerOrderNum=0;
        std::vector<std::string> Inventory;
        std::vector<std::string> SPAttackList {"Fireball Barrage", "Lightning Shot", "Draco Meteor"};
        std::vector<std::string> listOfInventory {"Healing Potion", "Defence Potion", "Smaller Healing Potion", "Blast Wand", "SP Refill", "DefenceUp"};

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
        void setplayerOrderNum(int);
        int getplayerOrderNum();

};


#endif //MAGE_H