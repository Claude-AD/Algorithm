#include "Account.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    Account a("junhyeok", 1, 5000);
    a.deposit(50000);
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
    int money = a.withdraw(20000);
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
    
    return 0;
}
