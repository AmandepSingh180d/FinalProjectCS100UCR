#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include<vector>
#include<string>

using namespace std;

class Character {
    public:
        int health;
        vector<string> inventory;
        int specialPoints;

        Character();
        virtual int getHealth() const = 0;
        virtual void setHealth(const int&) = 0;
        virtual int getSpecialPoints() const = 0;
        virtual void setSpecialPoints(const int&) = 0;
        virtual void setInventory() = 0;
        virtual vector<string> getInventory() const = 0;
        virtual vector<string> getSpecialAttack() const = 0;
         
};

#endif /* CHARACTER_HPP */