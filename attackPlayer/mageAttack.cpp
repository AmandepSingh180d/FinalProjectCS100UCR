#include "mageAttack.h"

int mageAttack::specialAttack(int sp, int choice, int dice){
     if (sp < 5 && choice == 1) {
        return 0;
    } else if (sp < 10 && choice == 2) {
        return 0;
    } else if (sp < 15 && choice == 3) {
        return 0;
    } else {
        switch (choice) {
            case 1:
                return calcFireBarrage() + dice;
            case 2:
                return calcLightningShot() + dice;
            case 3:
                return calcDracoMeteor() + dice;
            default:
                return 0;
            }
    }
}
int mageAttack::calcFireBarrage(){
    return 20;
}
int mageAttack::calcLightningShot(){
    return 30;
}
int mageAttack::calcDracoMeteor(){
    return 40;
}