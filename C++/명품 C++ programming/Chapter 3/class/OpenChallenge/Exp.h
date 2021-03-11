#ifndef EXP_H
#define EXP_H

class Exp {
    int base, exp;
    int value = 1;
    
public:
    Exp();
    Exp(int base);
    Exp(int base, int exp);
    int getValue();
    int getBase();
    int getExp();
    bool equals(Exp b);
};

#endif
