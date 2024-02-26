#include <vector>
#include <string>
#include <random>
#include "Thief.h"
        Thief::Thief(){
            this->health = 100;
            this->specialPoints = 20;
            setInventory();
        }
        int Thief::getHealth(){
            return this->health;
        }
        void Thief::setHealth(int newHealth){
            this->health = newHealth;
        }
        int Thief::getSpecialPoints(){
            return this->specialPoints;
        }
        void Thief::setSpecialPoints(int newSP){
            this->specialPoints = newSP;
        }
        std::vector<std::string> Thief::getInventory(){
            return this->Inventory;
        }
        void Thief::setInventory(){
            for (int i = 0; i<3; i++){
                int num=0;
                num = randomizer();
                inventory.push_back(listOfInventory.at(num));
            }
        }
        int Thief::randomizer(){
           int randNum = rand() % listOfInventory.size();
           return randNum;
        }
        std::vector<std::string> Thief::getSpecialAttack(){
            return this->SPAttackList;
        }