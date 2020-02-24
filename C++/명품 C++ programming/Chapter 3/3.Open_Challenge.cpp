#include <iostream>
#include <cmath>
using namespace std;

class Exp
{
private:
	int base;
	int exponent;

public:
	Exp() : Exp(1, 1) { }
	Exp(int a) : Exp(a, 1) { }
	Exp(int a, int b) : base(a), exponent(b) { }

	int get_value() { return pow(base, exponent); }
	int get_base() { return base; }
	int get_exp() { return exponent; }
	bool equals(Exp b)
	{
		if (b.get_value() == get_value())
			return true;
		else
			return false;
	}
};

int main()
{
	Exp a(3, 2);
	Exp b(9);
	Exp c;

	cout << a.get_value() << ' ' << b.get_value() << ' ' << c.get_value() << endl;
	printf("a의 베이스 %d,지수 %d\n", a.get_base(), a.get_exp());

	if (a.equals(b))
		cout << "same" << endl;
	else
		cout << "not same" << endl;
}