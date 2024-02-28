#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <cstdlib>
#include <ctime>
#include "Mage.h"

Mage::Mage() {
    this->health = 100;
    this->specialPoints = 20;
    srand(time(nullptr));
    setInventory();
}

int Mage::getHealth() const {
    return this->health;
}

void Mage::setHealth(const int& newHealth) {
    this->health = newHealth;

}

int Mage::getSpecialPoints() const{
    return this->specialPoints;
}

void Mage::setSpecialPoints(const int& newSP) {
    this->specialPoints = newSP;
}

void Mage::setInventory() {
    for (int i = 0; i < 3; ++i) {
        int num; 
        num = randomizer();
        inventory.push_back(listOfInventory.at(num));
    }

}

std::vector<std::string> Mage::getInventory() const{
    return this->inventory;
}

int Mage::randomizer() {
    int randNum = rand() % listOfInventory.size();
    return randNum;
}
    
   

std::vector<std::string> Mage::getSpecialAttack() const {
    return this->SPAttackList;
}