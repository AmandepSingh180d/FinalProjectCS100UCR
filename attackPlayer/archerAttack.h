#ifndef ARCHERATTACK_H
#define ARCHERATTACK_H
#include "attack.h"


class archerAttack : public Attack{
    public:
        int specialAttack(int sp,int choice, int dice);
        int calcArrowBarrage();
        int calcLargeArrow();
        int calcExplosiveArrow();
};

#endif // ARCHERATTACK_H
