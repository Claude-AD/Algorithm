#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

Family::Family(string familyName, int size) {
    this->familyName = familyName;
    this->size = size;
    p = new Person[size];
}

void Family::show() {
    cout << familyName << "가족은 다음과 같이 " << size << "명 입니다.\n";
    for(int i = 0; i < size; i++) {
        cout << p[i].getName() << "\t\t";
    }
    cout << endl;
}
