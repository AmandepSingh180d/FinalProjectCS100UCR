#ifndef ATTACK_H
#define ATTACK_H


class Attack {
public:
    int basicAttack();
    virtual int specialAttack(int sp,int choice, int dice) = 0;

private:
    int sp;
};

#endif // ATTACK_H