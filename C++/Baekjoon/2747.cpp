// ����Լ��� �̿��� Ǯ�̹��� Runtime-Error�� ���� for������ ���� �ذ�

#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	if (num == 0 || num == 1)
	{
		cout << num << endl;
	}

	else
	{
		int zero = 0;
		int one = 1;
		int fibo = 0;
		for (int i = 1; i < num; i++)
		{
			fibo = zero + one;
			zero = one;
			one = fibo;
		}
		cout << fibo << endl;
	}
	return 0;
}