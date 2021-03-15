#include "CoffeeVendingMachine.h"
#include <iostream>
using namespace std;

void CoffeeVendingMachine::fill() {
    for(int i = 0; i < 3; i++)
    career[i].fill();
    
    show();
}
void CoffeeVendingMachine::selectEspresso() {
    if(emptyCheck())
        return;
    career[0].consume();
    career[1].consume();
    cout << "에스프레소 드세요\n";
}
void CoffeeVendingMachine::selectAmericano() {
    if(emptyCheck())
        return;
    career[0].consume();
    career[1].consume();
    career[1].consume();
    cout << "아메리카노 드세요\n";
}
void CoffeeVendingMachine::selectSugarCoffee() {
    if(emptyCheck())
        return;
    career[0].consume();
    career[1].consume();
    career[1].consume();
    career[2].consume();
    cout << "설탕커피 드세요\n";
}
void CoffeeVendingMachine::show() {
    cout << "커피 " << career[0].getSize() << ", 물 " << career[1].getSize()
    << ", 설탕 " << career[2].getSize() << endl;
}
bool CoffeeVendingMachine::emptyCheck() {
    if(career[0].getSize() <= 0 || career[1].getSize() <= 0 || career[2].getSize() <= 0) {
        cout << "원료가 부족합니다.\n";
        return true;
    }
    return false;
}
void CoffeeVendingMachine::run() {
    cout << "***** 커피자판기를 작동합니다. *****\n";
    while(1) {
        cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>> ";
        int menu;
        cin >> menu;
        
        switch (menu) {
            case 1:
                selectEspresso();
                break;
                
            case 2:
                selectAmericano();
                break;
                
            case 3:
                selectSugarCoffee();
                break;
                
            case 4:
                show();
                break;
                
            case 5:
                fill();
                break;
                
            default:
                cout << "Input Error!\n";
                break;
        }
    }
}
