#ifndef MAGE_H
#define MAGE_H

#include <vector>
#include <string>

class Mage {
    public: 

    int health ;
    int specialPoints;
    std::vector<std::string> inventory;
     std::vector<std::string> specialAttacks {"Fireball Barrage", "Lightning Shot", "Draco Meteor ;)"};
    std::vector<std::string> listOfInventory {"Healing Potion", "Defence Potion", "Smaller Healing Potion", "Blast Wand"};


    Mage();
    int getHealth();
    void setHealth(int);
    int getSpecialPoints();
    void setSpecialPoints(int);
    void setInventory();
    std::vector<std::string> getInventory();
    int randomizer();
    std::vector<std::string> specialAttack();


};


#endif