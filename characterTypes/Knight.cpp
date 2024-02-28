#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <cstdlib>
#include <ctime>
#include "Knight.h"


Knight::Knight() {
    this->health = 100;
    this->specialPoints = 20;
    srand(time(nullptr));
    setInventory();
}

int Knight::getHealth() const{
    return this->health;
}

void Knight::setHealth(const int& newHealth) {
    this->health = newHealth;

}

int Knight::getSpecialPoints() const{
    return this->specialPoints;
}

void Knight::setSpecialPoints(const int& newSP) {
    this->specialPoints = newSP;
}

void Knight::setInventory() {
    for (int i = 0; i < 3; ++i) {
        int num = 0; 
        num = randomizer();
        inventory.push_back(listOfInventory.at(num));
    }
}

std::vector<std::string> Knight::getInventory() const{
    return this->inventory;
}

int Knight::randomizer() {
    int randNum = rand() % listOfInventory.size();
    return randNum;
}

std::vector<std::string> Knight::getSpecialAttack() const{
    return this->SPAttackList;
}