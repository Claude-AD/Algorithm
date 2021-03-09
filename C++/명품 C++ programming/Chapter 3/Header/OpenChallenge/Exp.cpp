#include "Exp.h"
#include <cmath>

Exp::Exp() { base = exp = value = 1; }
Exp::Exp(int base) {
    this->base = base;
    exp = 1;
    value = base;
}
Exp::Exp(int base, int exp) {
    this->base = base;
    this->exp = exp;
    value = pow(base, exp);
}

int Exp::getBase() { return base; }
int Exp::getExp() { return exp; }
int Exp::getValue() { return value; }

bool Exp::equals(Exp b) {
    return value == b.getValue();
}
