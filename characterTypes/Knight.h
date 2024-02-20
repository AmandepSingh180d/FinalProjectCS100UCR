#ifndef KNIGHT_H
#define KNIGHT_H

#include <vector>
#include <string>

class Knight {
    public: 

    int health;
    int specialPoints;
    std::vector<std::string> inventory;
    std::vector<std::string> specialAttacks {"Horse Charge", "Double Slice", "Pump Up", "Halberd Attack"};
    std::vector<std::string> listOfInventory {"Shield", "Steak", "Stew", "Pistol"};


    Knight();
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