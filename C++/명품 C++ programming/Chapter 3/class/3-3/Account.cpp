#include "Account.h"

int Account::withdraw(int money) {
    balance -= money;
    return money;
}
