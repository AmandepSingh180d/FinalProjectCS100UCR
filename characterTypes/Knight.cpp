#include <iostream>
#include <vector>
#include <string>
#include <random>
#include "Knight.h"


Knight::Knight() {
    this->health = 100;
    this->specialPoints = 20;
    setInventory();
}

int Knight::getHealth() {
    return this->health;
}

void Knight::setHealth(int newHealth) {
    this->health = newHealth;

}

int Knight::getSpecialPoints() {
    return this->specialPoints;
}

void Knight::setSpecialPoints(int newSP) {
    this->specialPoints = newSP;
}

void Knight::setInventory() {
    for (int i = 0; i < 3; ++i) {
        int num = 0; 
        num = randomizer();
        inventory.push_back(listOfInventory.at(num));
    }
}

std::vector<std::string> Knight::getInventory() {
    return this->inventory;
}

int Knight::randomizer() {
    int randNum = rand() % listOfInventory.size();
    return randNum;
}

std::vector<std::string> Knight::getSpecialAttack() {
    return this->SPAttackList;
}