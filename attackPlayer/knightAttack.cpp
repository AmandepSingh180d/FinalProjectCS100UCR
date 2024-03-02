#include "knightAttack.h"

int knightAttack::specialAttack(int sp, int choice, int dice){
     if (sp < 5 && choice == 1) {
        return 0;
    } else if (sp < 10 && choice == 2) {
        return 0;
    } else if (sp < 15 && choice == 3) {
        return 0;
    } else {
        switch (choice) {
            case 1:
                return calcHorseCharge() + dice;
            case 2:
                return calcDoubleSlice() + dice;
            case 3:
                return calcHalberdAttack() + dice;
            default:
                return 0;
            }
    }
}
int knightAttack::calcHorseCharge(){
    return 20;
}
int knightAttack::calcDoubleSlice(){
    return 30;
}
int knightAttack::calcHalberdAttack(){
    return 40;
}
