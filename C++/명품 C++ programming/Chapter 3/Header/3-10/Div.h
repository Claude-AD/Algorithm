#ifndef DIV_H
#define DIV_H

class Div
{
private:
	int a;
	int b;

public:
	void set_value(int x, int y) { a = x; b = y; }
	int calculate() { return a / b; }
};

#endif