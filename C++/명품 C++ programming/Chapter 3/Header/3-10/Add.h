#ifndef ADD_H
#define ADD_H

class Add
{
private:
	int a;
	int b;

public:
	void set_value(int x, int y) { a = x; b = y; }
	int calculate() { return a + b; }
};

#endif
