#include "Sample.h"
#include <iostream>
using namespace std;

void Sample::read() {
    for(int i = 0; i < size; i++) {
        int num;
        cin >> num;
        p[i] = num;
    }
}

void Sample::write() {
    for(int i = 0; i < size; i++) {
        cout << p[i] << ' ';
    }
    cout << endl;
}

int Sample::big() {
    int max = *p;
    for(int i = 1; i < size; i++) {
        if(p[i] > max)
            max = p[i];
    }
    return max;
}
