#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	while (true)
	{
		int num1, num2;
		char _operator;
		cout << "? ";
		cin >> num1 >> _operator >> num2;

		int result;
		switch (_operator)
		{
		case '+' :
			result = num1 + num2;
			break;

		case '-' :
			result = num1 - num2;
			break;

		case '*' :
			result = num1 * num2;
			break;

		case '/' :
			result = num1 / num2;
			break;

		case '%' :
			result = num1 % num2;
			break;
		}

		printf("%d %c %d = %d\n", num1, _operator, num2, result);
	}
	return 0;
}
