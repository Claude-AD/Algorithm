#include "CoffeeMachine.h"
#include <iostream>
using namespace std;

void CoffeeMachine::drinkEspresso() {
    coffee--;
    water--;
}

void CoffeeMachine::drinkAmericano() {
    coffee--;
    water -= 2;
}

void CoffeeMachine::drinkSugarCoffee() {
    coffee--;
    water -= 2;
    sugar--;
}

void CoffeeMachine::fill() {
    coffee = water = sugar = 10;
}

void CoffeeMachine::show() {
    cout << "커피 머신 상태, 커피:" << coffee << "\t물:" << water
    << "\t설탕:" << sugar << endl;
}
