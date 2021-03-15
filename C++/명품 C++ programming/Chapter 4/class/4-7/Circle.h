#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
    int radius;
public:
    void setRadius(int radius) { this->radius = radius; }
    double getArea() { return radius * radius * 3.14; }
};

#endif
