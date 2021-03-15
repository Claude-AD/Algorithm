#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
    string name;
public:
    string getName() { return name; }
    void setName(string name) { this->name = name; }
};

class Family {
    Person *p;
    string familyName;
    int size;
public:
    Family(string familyName, int size);
    void setName(int index, string name) { p[index].setName(name); }
    void show();
    ~Family() { delete [] p; }
};

#endif
