#ifndef CHOICE_HPP
#define CHOICE_HPP
#include<vector>
#include<iostream>
#include<string>

using namespace std;

class Choice {
    private:
        int actionChoiceInput;
        int whoAttackInput;
        int attackChoiceInput;
        int inventoryChoiceInput;
        int characterChoiceInput;
        int endGameInputChoice;
    public: 
        Choice();
        int actionChoice(); //1-4
        int chooseWhoToAttack(); //1-4
        int specialAttackChoice(); //1-3 here burhan
        int inventoryChoice(); //1-4
        int characterChoice(); //
        int endGameChoice(); //1-2
};

#endif