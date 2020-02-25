#include <iostream>
using namespace std;

#include "Add.h"
#include "Sub.h"
#include "Mul.h"
#include "Div.h"

int main()
{
	while (true)
	{
		int a, b;
		char oper;
		cout << "두 정수와 연산자를 입력하세요>>";
		cin >> a >> b >> oper;

		if (oper == '+')
		{
			Add add;
			add.set_value(a, b);
			cout << add.calculate() << endl;
		}
		else if (oper == '-')
		{
			Sub sub;
			sub.set_value(a, b);
			cout << sub.caculate() << endl;
		}
		else if (oper == '*')
		{
			Mul mul;
			mul.set_value(a, b);
			cout << mul.calculate() << endl;
		}
		else if (oper == '/')
		{
			Div div;
			div.set_value(a, b);
			cout << div.calculate() << endl;
		}
		else
			cout << "Wrong Input!!" << endl;
	}
	return 0;
}