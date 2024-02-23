#include <vector>
#include <string>
#include <random>
#include "Archer.h"
        Archer::Archer(){

        }
        int Archer::getHealth(){
            return this->health;
        }
        void Archer::setHealth(int newHealth){
            this->health = newHealth;
        }
        int Archer::getSpecialPoints(){
            return this->specialPoints;
        }
        void Archer::setSpecialPoints(int newSP){
            this->specialPoints = newSP;
        }
        std::vector<std::string> Archer::getInventory(){
            return this->Inventory;
        }
        void Archer::setInventory(){
            for (int i = 0; i<3; i++){
                int num=0;
                num = randomizer();
                inventory.push_back(listOfInventory.at(num));
            }
        }
        int Archer::randomizer(){
           int randNum = rand() % listOfInventory.size();
           return randNum;
        }
        std::vector<std::string> Archer::getSpecialAttack(){
            return this->SPAttackList;
        }