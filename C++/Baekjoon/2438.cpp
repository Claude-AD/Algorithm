#include <iostream>
using namespace std;

int main()
{
	int num; // �� ��° �ٱ��� ���� ����� ������
	cin >> num; // ����ڷκ��� �Է¹���

	for (int i = 1; i <= num; i++) // ���� �� ��° ������ ��Ÿ��
	{
		for (int j = 0; j < i; j++) // ���� N��° ���̶�� �� N���� ����
		{
			cout << '*';
		}
		cout << '\n'; // ���� ���� �� ���� ���๮�� ���
	}
	return 0;
}