#include "diceRoll.h"

int DiceRoll::rollDice(){
    srand(time(NULL));
    int randNum = rand()%12 +1;
    return randNum;
}