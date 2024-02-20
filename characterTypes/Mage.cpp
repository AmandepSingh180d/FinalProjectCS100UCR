#include <iostream>
#include <vector>
#include <string>
#include "Mage.h"

Mage::Mage() {
    this->health = 100;
    this->specialPoints = 20;
}

int Mage::getHealth() {
    return this->health;
}

void Mage::setHealth(int newHealth) {
    this->health = newHealth;

}

int Mage::getSpecialPoints() {
    return this->specialPoints;
}

void Mage::setSpecialPoints(int newSpecialPoints) {
    this->specialPoints = newSpecialPoints;
}

void Mage::setInventory() {
    for (int i = 0; i < 3; ++i) {
        int num; 
        num = randomizer();
        inventory.push_back(listOfInventory.at(num));
    }

}

std::vector<std::string> Mage::getInventory() {
    return this->inventory;
}

int Mage::randomizer() {
    int randNum = rand() % listOfInventory.size();
    return randNum;
}
    
   

std::vector<std::string> Mage::specialAttack() {
    return this->specialAttacks;
}