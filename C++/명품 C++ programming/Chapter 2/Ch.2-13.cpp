#include <iostream>
#include <string>
using namespace std;

void order(string menu);

int main() {
    cout << "***** 승리장에 오신 것을 환영합니다. *****\n";
    while(1) {
        int menu;
        cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>>\t";
        cin >> menu;
        
        switch (menu) {
            case 1:
                order("짬뽕");
                break;
                
            case 2:
                order("짜장");
                break;
                
            case 3:
                order("군만두");
                break;
                
            case 4:
                cout << "오늘 영업은 끝났습니다.\n";
                break;
                
            default:
                cout << "다시 주문하세요!!\n";
                break;
        }
        if (menu == 4) {
            break;
        }
    }
    return 0;
}

void order(string menu) {
    int people;
    cout << "몇인분?";
    cin >> people;
    
    cout << menu + " " << people << "인분 나왔습니다\n";
}
