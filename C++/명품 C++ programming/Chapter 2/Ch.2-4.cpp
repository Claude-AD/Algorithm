#include <iostream>
using namespace std;

int main()
{
	cout << "5 ���� �Ǽ��� �Է��϶�>>";

	double num[5];
	cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4];

	double max = num[0];
	for (int i = 0; i < 5; i++)
	{
		if (num[i] > max)
		{
			max = num[i];
		}
		else
			continue;
	}

	cout << "���� ū �� = " << max << endl;
	return 0;
}