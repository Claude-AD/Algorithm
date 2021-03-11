#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date {
    int year, month, day;
     
public:
    Date(int y, int m, int d)
    : year(y), month(m), day(d) { }
    
    Date(string date);
    int getYear() { return year; }
    int getMonth() { return month; }
    int getDay() { return day; }
    void show() {
        cout << year << "년" << month << "월" << day << "일" << endl;
    }
};

#endif
