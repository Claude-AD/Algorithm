#include <iostream>
using namespace std;

int main()
{
	int dow[12][31];			
	// ������ ������ ���߹迭 ����

	int count = 0;				
	// ������ ���ڷ� ǥ��
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 31; j++)
		{
			if ((i == 1 && j == 28) || (i == 1 && j == 29) ||
				(i == 1 && j == 30))
			{
				continue;
				// 2���� 28�ϱ��� ����
			}
			else if ((i == 3 && j == 30) || (i == 5 && j == 30) ||
				(i == 8 && j == 30) || (i == 10 && j == 30))
			{
				continue;
				// 4��, 6��, 9��, 11���� 30�ϱ��� ����
			}
			else
			{
				dow[i][j] = count;
				count++;
				// ������ ��¥���� ������ ����
			}
		}
	}
	int month, day;
	cin >> month >> day;		
	// �ް� ��¥�� �Է�

	int result = dow[month - 1][day - 1];
	// �迭�� (0,0) ���� �����ϹǷ� �Է��� �ް� ��¥���� 1�� ���ش�.
	int remainder = result % 7;
	// 7�� ������ �� �������� ������ �����ش�.
	if (remainder == 0)
		cout << "MON\n";
	else if (remainder == 1)
		cout << "TUE\n";
	else if (remainder == 2)
		cout << "WED\n";
	else if (remainder == 3)
		cout << "THU\n";
	else if (remainder == 4)
		cout << "FRI\n";
	else if (remainder == 5)
		cout << "SAT\n";
	else if (remainder == 6)
		cout << "SUN\n";

	return 0;
}