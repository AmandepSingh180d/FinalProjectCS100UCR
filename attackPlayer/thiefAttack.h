#ifndef THIEFATTACK_H
#define THIEFATTACK_H
#include "attack.h"


class thiefAttack : public Attack{
    public:
        int specialAttack(int sp,int choice, int dice);
        int calc3xStab();
        int calcShinDestroyer();
        int calcBackstab();
};

#endif // THIEFATTACK_H