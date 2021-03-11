#ifndef INTEGER_H
#define INTEGER_H

#include <string>
using namespace std;

class Integer {
    int value;
public:
    Integer(int num) : value(num) { }
    Integer(string num) : value(stoi(num)) { }
    int get() { return value; }
    void set(int num) { value = num; }
    bool isEven() { return value % 2 == 0; }
};

#endif
