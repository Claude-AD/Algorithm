#include "Circle.h"
#include <iostream>
using namespace std;

int main() {
    Circle circles[3];
    int overHunnitCnt = 0;
    for(int i = 0; i < 3; i++) {
        cout << "원 " << i+1 << "의 반지름 >> ";
        int r;
        cin >> r;
        circles[i].setRadius(r);
        if(circles[i].getArea() > 100)
            overHunnitCnt++;
    }
    cout << "면적이 100보다 큰 원은 " << overHunnitCnt << "개 입니다\n";
    return 0;
}
