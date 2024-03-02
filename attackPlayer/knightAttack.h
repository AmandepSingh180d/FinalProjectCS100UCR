#ifndef KNIGHTATTACK_H
#define KNIGHTATTACK_H
#include "attack.h"


class knightAttack : public Attack{
    public:
        int specialAttack(int sp,int choice, int dice);
        int calcHorseCharge();
        int calcDoubleSlice();
        int calcHalberdAttack();
};

#endif // KNIGHTATTACK_H