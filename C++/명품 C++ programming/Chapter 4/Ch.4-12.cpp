#include "Circle.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    int circlesNum;
    cout << "원의 개수 >> ";
    cin >> circlesNum;
    
    CircleManager circles(circlesNum);
    for(int i = 0; i < circlesNum; i++) {
        string circleName;
        int radius;
        cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
        cin >> circleName >> radius;
        circles.setCircles(i, circleName, radius);
    }
    
    string searchCircle;
    cout << "검색하고자 하는 원의 이름 >> ";
    cin >> searchCircle;
    circles.searchByName(searchCircle);
    
    int area;
    cout << "최소 면적을 정수로 입력하세요 >> ";
    cin >> area;
    circles.searchByArea(area);
    
    return 0;
}
