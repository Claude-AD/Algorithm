#include <iostream>
using namespace std;

int main()
{
	int num; // �� ��° �ٱ��� ���� ����� ������
	cin >> num; // ����ڷκ��� �Է¹���

	for (int i = 0; i < num; i++) // ���� �� ��° ������ ��Ÿ��
	{
		for (int j = 0; j < i; j++) // ���� N��° ���̶�� ���� N - 1���� ����
		{
			cout << ' ';
		}
		/*
			���� N��° ���̶�� �� 2*(num - N) + 1���� ����
			�Ʒ� �ݺ��������� k�� 0���� �����ϹǷ� 2*(num-i)-1�� �ۼ�
		*/
		for (int k = 0; k < 2*(num-i)-1; k++) 
		{
			cout << '*';
		}
		cout << '\n'; // ���� ���� �� ���� ���๮�� ���
	}
	return 0;
}