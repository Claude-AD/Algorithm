#include "Oval.h"
#include <iostream>
using namespace std;

Oval::~Oval() {
    cout << "Oval 소멸 : width = " << width
    << ", height = " << height << endl;
}

void Oval::set(int w, int h) {
    width = w;
    height = h;
}

void Oval::show() {
    cout << "width = " << width
    << ", height = " << height << endl;
}
