#ifndef SUB_H
#define SUB_H

class Sub
{
private:
	int a;
	int b;

public:
	void set_value(int x, int y) { a = x; b = y; }
	int caculate() { return a - b; }
};

#endif
