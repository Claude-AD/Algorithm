#include "Ram.h"
#include <iostream>
using namespace std;

Ram::Ram() {
    size = RAM_SIZE;
    for (int i = 0; i < RAM_SIZE; i++)
        mem[i] = 0;
}
Ram::~Ram() {
    cout << "메모리 제거됨\n";
}

char Ram::read(int address) {
    return mem[address];
}

void Ram::write(int address, char value) {
    mem[address] = value;
}


