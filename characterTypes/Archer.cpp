#include <vector>
#include <string>
#include <random>

class Archer : public Character {
    private:
        int specialPoints;
        int health;
        std::vector<std::string> Inventory = {"","","",""};
        std::vector<std::string> listOfInventory = {"SP refill", "HealthUp","AtackUp","Small potion", "Stew","DefenseUp"};

    public:
        virtual int getHealth(){
            return health;
        }
        virtual void setHealth(int newHealth){
            health = newHealth;
        }
        virtual int getSpecialPoints(){
            return specialPoints;
        }
        virtual void setSpecialPoints(int newSP){
            specialPoints = newSP;
        }
        virtual std::vector<std::string> getInventory(){
            return Inventory;
        }
        virtual void setInventory(std::vector<std::string> chosenInventory){
            Inventory = chosenInventory;
        }
        void randomizer(){
           int randVar=0; 
            for(int i=0; i<4; ++i){
                randVar = rand() %6 +1;
                Inventory[i]=listOfInventory[randVar-1];
            }
        }
};