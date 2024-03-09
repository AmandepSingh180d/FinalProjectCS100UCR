#include <vector>
#include <string>
#include <random>
#include <cstdlib>
#include <ctime>
#include "Archer.h"
        Archer::Archer(){
            this->health = 100;
            this->specialPoints = 20;
            srand(time(nullptr));
            setInventory();
        }
        int Archer::getHealth() const{
            return this->health;
        }
        void Archer::setHealth(const int& newHealth){
            this->health = newHealth;
        }
        int Archer::getSpecialPoints() const{
            return this->specialPoints;
        }
        void Archer::setSpecialPoints(const int& newSP){
            this->specialPoints = newSP;
        }
        std::vector<std::string> Archer::getInventory() const{
            return this->Inventory;
        }
        void Archer::setInventory(){
            for (int i = 0; i < 3; ++i) {
            int num = 0; 
            num = randomizer();
            Inventory.push_back(listOfInventory.at(num));
            }
        }
        int Archer::randomizer(){
           int randNum = rand() % listOfInventory.size();
            return randNum;
        }
        std::vector<std::string> Archer::getSpecialAttack() const{
            return this->SPAttackList;
        }
        void Archer::setplayerOrderNum(int playerNum){
            this->playerOrderNum=playerNum;
        }
        int Archer::getplayerOrderNum(){
            return this->playerOrderNum;
        }