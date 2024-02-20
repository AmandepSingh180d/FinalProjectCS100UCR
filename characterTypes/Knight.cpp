#include <iostream>
#include <vector>
#include <string>
#include "Knight.h"


Knight::Knight() {
    this->health = 100;
    this->specialPoints = 20;
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

void Knight::setSpecialPoints(int newSpecialPoints) {
    this->specialPoints = newSpecialPoints;
}

void Knight::setInventory() {
    for (int i = 0; i < 3; ++i) {
        int num; 
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

std::vector<std::string> Knight::specialAttack() {
    return this->specialAttacks;
}