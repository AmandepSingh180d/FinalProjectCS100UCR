#ifndef MAGEATTACK_H
#define MAGEATTACK_H
#include "attack.h"


class mageAttack : public Attack{
    public:
        int specialAttack(int sp,int choice, int dice);
        int calcFireBarrage();
        int calcLightningShot();
        int calcDracoMeteor();
};


#endif // MAGEATTACK_H