#include "thiefAttack.h"

int thiefAttack::specialAttack(int sp, int choice, int dice){
     if (sp < 5 && choice == 1) {
        return 0;
    } else if (sp < 10 && choice == 2) {
        return 0;
    } else if (sp < 15 && choice == 3) {
        return 0;
    } else {
        switch (choice) {
            case 1:
                return calc3xStab() + dice;
            case 2:
                return calcShinDestroyer() + dice;
            case 3:
                return calcBackstab() + dice;
            default:
                return 0;
            }
    }
}
int thiefAttack::calc3xStab(){
    return 20;
}
int thiefAttack::calcShinDestroyer(){
    return 30;
}
int thiefAttack::calcBackstab(){
    return 40;
}