#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
using namespace std;

class Account {
    string name;
    int idNum, balance;
    
public:
    Account(string n, int i, int b)
    : name(n), idNum(i), balance(b) { }
    void deposit(int money) { balance += money; }
    int withdraw(int money);
    string getOwner() { return name; }
    int inquiry() { return balance; }
};

#endif
