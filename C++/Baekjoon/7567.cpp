#include <iostream>
#include <string>
using namespace std;

int main()
{
	string plates; // ����ڷκ��� �Է¹��� �׸� ���ڿ�
	int plates_height = 0; // �׸��� ���� ����

	cin >> plates; // ����ڷκ��� �׸� ���ڿ� �Է¹���

	for (int i = 0; i < plates.length(); i++) // �� �׸��� ������ŭ �ݺ�
	{
		if (i == 0)
			plates_height += 10; // ó�� �ٴڿ� �ִ� �׸��� ���̴� 10cm

		else
		{

			if (plates[i - 1] == plates[i]) // ���� �������� ������ ���� 5cm ����
				plates_height += 5;
			else // �ݴ�������� ���̸� ���� 10cm ����
				plates_height += 10;
		}
	}
	cout << plates_height << endl; // �׸��� ���� ���� ���
	return 0;
}
