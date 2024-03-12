#include "archerAttack.h"

int archerAttack::specialAttack(int sp, int choice, int dice){
     if (sp < 5 && choice == 1) {
        return 0;
    } else if (sp < 10 && choice == 2) {
        return 0;
    } else if (sp < 15 && choice == 3) {
        return 0;
    } else {
        switch (choice) {
            case 1:
                return calcArrowBarrage() + dice;
            case 2:
                return calcLargeArrow() + dice;
            case 3:
                return calcExplosiveArrow() + dice;
            default:
                return 0;
            }
    }
}
int archerAttack::calcArrowBarrage(){
    return 20;
}
int archerAttack::calcLargeArrow(){
    return 30;
}
int archerAttack::calcExplosiveArrow(){
    return 40;
}
