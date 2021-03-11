#ifndef COFFEEMACHINE_H
#define COFFEEMACHINE_H

class CoffeeMachine {
    int coffee, water, sugar;
public:
    CoffeeMachine(int c, int w, int s)
    : coffee(c), water(w), sugar(s) { }
    
    void drinkEspresso();     // 커피 1, 물 1 소비
    void drinkAmericano();    // 커피 1, 물 2 소비
    void drinkSugarCoffee();  // 커피 1, 물 2, 설탕 1 소비
    void fill();              // 커피 10, 물 10, 설탕 10으로 채우기
    void show();              // 현재 커피 머신의 상태 출력
};

#endif
