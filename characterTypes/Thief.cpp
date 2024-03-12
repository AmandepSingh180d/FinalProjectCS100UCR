#include <vector>
#include <string>
#include <random>
#include <cstdlib>
#include <ctime>
#include "Thief.h"
        Thief::Thief(){
            this->health = 100;
            this->specialPoints = 20;
            srand(time(nullptr));
            setInventory();
            
        }
        int Thief::getHealth() const{
            return this->health;
        }
        void Thief::setHealth(const int& newHealth){
            this->health = newHealth;
        }
        int Thief::getSpecialPoints() const{
            return this->specialPoints;
        }
        void Thief::setSpecialPoints(const int& newSP){
            this->specialPoints = newSP;
        }
        std::vector<std::string> Thief::getInventory() const{
            return this->Inventory;
        }
        void Thief::setInventory(){
            for (int i = 0; i<3; i++){
                int num=0;
                num = randomizer();
                Inventory.push_back(listOfInventory.at(num));
            }
        }
        int Thief::randomizer(){
           int randNum = rand() % listOfInventory.size();
           return randNum;
        }
        std::vector<std::string> Thief::getSpecialAttack() const{
            return this->SPAttackList;
        }
        
        void Thief::setplayerOrderNum(int playerNum){
            this->playerOrderNum=playerNum;
        }
        int Thief::getplayerOrderNum(){
            return this->playerOrderNum;
        }
        void Thief::setPlayerRotation(int pRot){
            this->playerRot=pRot;
        }
        int Thief::getPlayerRotation(){
            return this->playerRot;
        }