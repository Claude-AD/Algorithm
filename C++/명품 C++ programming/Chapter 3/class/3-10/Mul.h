#ifndef MUL_H
#define MUL_H

class Mul
{
private:
	int a;
	int b;

public:
	void set_value(int x, int y) { a = x; b = y; }
	int calculate() { return a * b; }
};

#endif