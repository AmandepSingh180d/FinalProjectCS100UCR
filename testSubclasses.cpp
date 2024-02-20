#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include "../characterTypes/Knight.h"
#include "../characterTypes/Mage.h"


int main() {
srand(time(NULL));

Knight knight1; 
Mage mage1;

knight1.randomizer();

int health;
int healthMage;

health = knight1.getHealth();

std::cout << "KNIGHT: " << std::endl; 
std::cout << "HP: " << health << std::endl;

knight1.setHealth(90);
health = knight1.getHealth();
std::cout << "HP: " << health << std::endl;


healthMage = mage1.getHealth();

std::cout << "MAGE: " << std::endl; 
std::cout << "HP: " << healthMage << std::endl;

knight1.setHealth(10);
health = knight1.getHealth();
std::cout << "HP: " << health << std::endl;

std::cout << std::endl;

knight1.setInventory();

for (int i =0; i < knight1.inventory.size(); ++i) {
    std::cout << knight1.inventory.at(i) << ", ";

}

std::cout << std::endl;


mage1.setInventory();

for (int i =0; i < mage1.inventory.size(); ++i) {
    std::cout << mage1.inventory.at(i) << ", ";

}

std::cout << std::endl;

std::cout << "KNIGHT's ATTACKS" << std::endl;

std::vector<std::string> attacks1 = knight1.specialAttack();

for (int i =0; i < attacks1.size(); ++i) {
    std::cout << attacks1.at(i) << ", ";
}

std::vector<std::string> attacks2 = mage1.specialAttack();

std::cout << "MAGE's ATTACKS" << std::endl;
for (int i =0; i < attacks2.size(); ++i) {
    std::cout << attacks2.at(i) << ", ";
}

return 0;

}