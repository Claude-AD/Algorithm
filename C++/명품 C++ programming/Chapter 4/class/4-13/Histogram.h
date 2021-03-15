#ifndef HISTOGRAM_H
#define HISTOGRAM_H

#include <string>
using namespace std;

class Histogram {
    string str;
public:
    Histogram(string s) : str(s) { }
    void put(string s) { str.append(s); }
    void putc(char c) { str += c; }
    void print();
};

#endif
