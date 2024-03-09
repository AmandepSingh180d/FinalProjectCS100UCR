#include "Choice.h"
#include<vector>
#include<iostream>
#include<string>
#include <limits>

using namespace std;

Choice::Choice() {
    actionChoiceInput = 0;
    whoAttackInput = 0;
    attackChoiceInput = 0;
    inventoryChoiceInput = 0;
    characterChoiceInput = 0;
    endGameInputChoice = 0;
}

int Choice::actionChoice() {
    cout << "\nPlease enter your action choice (a number 1-4)\n";
    while(!(cin>> actionChoiceInput) || actionChoiceInput < 1 || actionChoiceInput > 4) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Oops, that is not a valid action choice ";
        cout << "Please enter a number between 1 and 4.\n";
    }
    return actionChoiceInput;
}

int Choice::chooseWhoToAttack() {
    cout << "\nPlease choose the player you want to attack (player number 1-4)\n";
    cout << "Do not enter your own player number\n";
    while(!(cin>> whoAttackInput) || whoAttackInput < 1 || whoAttackInput > 4) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Oops, that is not a valid player choice ";
        cout << "Please enter a number between 1 and 4.\n";
    }
    return whoAttackInput;
}

int Choice::specialAttackChoice() {
    cout << "\nPlease enter your special attack choice (a number 1-3)\n";
    while(!(cin >> attackChoiceInput) || attackChoiceInput < 1 || attackChoiceInput > 3) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Oops, that is not a valid special attack choice ";
        cout << "Please enter a number between 1 and 3.\n";
    }
    return attackChoiceInput;
}

int Choice::inventoryChoice() {
    cout << "\nChoose your item (a number 1-4):\n";
    while(!(cin >> inventoryChoiceInput) || inventoryChoiceInput < 1 || inventoryChoiceInput > 4) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Oops, that is not a valid item choice ";
        cout << "Please enter a number between 1 and 4.\n";
    }
    return inventoryChoiceInput;
}

int Choice::characterChoice() {
    cout << "\nChoose your character (a number 1-4):\n";
    while (!(cin >> characterChoiceInput) || characterChoiceInput < 1 || characterChoiceInput > 4) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Oops, that is not a valid character choice ";
        cout << "Please enter a number between 1 and 4.\n";
    }
    return characterChoiceInput;
}

int Choice::endGameChoice() {
    cout << "\nDo you wish to continue or end the game (1 to Play Again, 2 to quit):\n";
    while (!(cin >> endGameInputChoice) || endGameInputChoice < 1 || endGameInputChoice > 2) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Oops, that is not a valid choice ";
        cout << "Please enter a number between 1 and 2.\n";
    }
    return endGameInputChoice;
}