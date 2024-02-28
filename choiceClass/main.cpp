#include "Choice.h"
#include<vector>
#include<iostream>
#include<string>

using namespace std;

int main () {
    Choice c1;
    cout << c1.actionChoice() << endl;
    cout << c1.chooseWhoToAttack() << endl;
    cout << c1.specialAttackChoice() << endl;
    cout << c1.inventoryChoice() << endl;
    cout << c1.characterChoice() << endl;
    cout << c1.endGameChoice() << endl;
}