#ifndef PLAYERMANAGEMENT_H
#define PLAYERMANAGEMENT_H

#include "Archer.h"
#include "Knight.h"
#include "Mage.h"
#include "Thief.h"
#include "archerAttack.h"
#include "knightAttack.h"
#include "mageAttack.h"
#include "thiefAttack.h"


class PlayerManagement{
    public:
    void callAttack(int attackType, int playerNum, int attackingPlayernum);
    void applyDamage(int playerNum, int dmg);
};




#endif //PLAYERMANAGEMENT_H