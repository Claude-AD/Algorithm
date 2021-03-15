#ifndef COFFEEVENDINGMACHINE_H
#define COFFEEVENDINGMACHINE_H

class Container {  // 통 하나를 나타내는 클래스
    int size;  // 현재 저장 량, 최대 저장량은 10
public:
    Container() { size = 10; }
    void fill() { size = 10; }  // 최대량(10)으로 채우기
    void consume() { size -= 1; }  // 1 만큼 소모하기
    int getSize() { return size; }  // 현재 크기 리턴
};

class CoffeeVendingMachine {
    Container career[3];  // career[0]은 커피, career[1]은 물, career[2]는 설탕
    void fill();  // 3개의 통을 모두 10으로 채움
    void selectEspresso();  // 에스프레소, 커피 1, 물 1 소모
    void selectAmericano();  // 아메리카노, 커피 1, 물 2 소모
    void selectSugarCoffee();  // 설탕커피, 커피 1, 물 2, 설탕 1 소모
    void show();  // 현재 커피, 물, 설탕의 잔량 출력
    bool emptyCheck();  // 커피, 물, 설탕이 부족한지 체크함
public:
    void run();
};

#endif
