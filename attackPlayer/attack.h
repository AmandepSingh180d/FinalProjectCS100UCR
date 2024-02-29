#ifndef ARCHER_ATTACK_H
#define ARCHER_ATTACK_H

#include "attack.h"

class Attack {
public:
    int basicAttack();
    int specialAttack(int sp,int choice);

private:
    int sp;
};

#endif // ARCHER_ATTACK_H