#include "attack.h"



int Attack::basicAttack() {
        return 10;
}
int Attack::specialAttack(int sp, int choice){
    if (sp < 5 && choice == 1) {
        return 0;
    } else if (sp < 10 && choice == 2) {
        return 0;
    } else if (sp < 15 && choice == 3) {
        return 0;
    } else {
        switch (choice) {
            case 1:
                return 20;
            case 2:
                return 30;
            case 3:
                return 40;
            default:
                return 0;
            }
    }
}