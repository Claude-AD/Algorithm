#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	cout << "�� ���� �Է��϶�>>";
	cin >> num1 >> num2;

	if (num1 > num2)
		cout << "ū �� = " << num1 << endl;
	else if (num1 < num2)
		cout << "ū �� = " << num2 << endl;
	else
		cout << "�� ���� �����ϴ�." << endl;

	return 0;
}