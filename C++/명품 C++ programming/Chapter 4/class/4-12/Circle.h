#ifndef CIRCLE_H
#define CIRCLE_H

#include <string>
using namespace std;

class Circle {
    int radius;  // 원의 반지름 값
    string name; // 원의 이름
public:
    void setCircle(string name, int radius) {
        this->radius = radius;
        this->name = name;
    }
    double getArea() { return radius*radius*3.14; }
    string getName() { return name; }
};

class CircleManager {
    Circle *p;  // Circle 배열에 대한 포인터
    int size;  // 배열의 크기
public:
    CircleManager(int size) {
        this->size = size;
        p = new Circle [size];
    }
    ~CircleManager() { delete [] p; }
    void setCircles(int index, string name, int radius) {
        p[index].setCircle(name, radius);
    }
    void searchByName(string name);
    void searchByArea(double area);
};

#endif
