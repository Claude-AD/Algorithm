#include <iostream>
using namespace std;

int main()
{
	int num; // �� ��° �ٱ��� ���� ����� ������
	cin >> num; // ����ڷκ��� �Է¹���

	for (int i = 1; i <= num; i++) // ���� �� ��° ������ ��Ÿ��
	{
		for (int j = 0; j < num-i; j++) // ���� N��° ���̶�� ���� num - N���� ����
		{
			cout << ' ';
		}
		for (int k = 0; k < i; k++) // ���� N��° ���̶�� �� N���� ����
		{
			cout << '*';
		}
		cout << '\n'; // ���� ���� �� ���� ���๮�� ���
	}
	return 0;
}