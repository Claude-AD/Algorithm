#include <iostream>
#include <string>
using namespace std;

void coffeeOrder(string menu, int num); // 커피 가격 계산 함수
int sales = 0;  // 총 커피 판매량

int main() {
    cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다.\n";
    while (1) {
        string coffee_name;
        int coffee_num;
        
        cout << "주문>> ";
        cin >> coffee_name >> coffee_num;
        coffeeOrder(coffee_name, coffee_num);
        
        if (sales >= 20000) { // 판매량이 20000원 이상이면 카페 영업 종료
            cout << "오늘 " << sales << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~\n";
            break;
        }
    }
    return 0;
}

void coffeeOrder(string menu, int num) {
    int price;
    if (menu.compare("에스프레소") == 0) {           // 에스프레소 가격 2000원
        price = 2000 * num;
    } else if (menu.compare("아메리카노") == 0) {    // 아메리카노 가격 2300원
        price = 2300 * num;
    } else if (menu.compare("카푸치노") == 0) {     // 카푸치노 가격 2500원
        price = 2500 * num;
    } else {
        cout << "다시 주문하세요!!!\n";
        return;
    }
    cout << price << "원입니다. 맛있게 드세요\n";
    sales += price; // 총 판매량에 판매한 커피가격 추가
}
