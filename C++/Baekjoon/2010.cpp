#include <iostream>
using namespace std;

int main()
{
	int multitap; // ��Ƽ�� ����
	cin >> multitap; // ����ڷκ��� �Է¹���

	int sum = 0; // �� �÷��� ����
	for (int i = 0; i < multitap; i++)
	{
		int electric; // �÷��� ����
		cin >> electric; // ����ڷκ��� �Է¹���
		sum += electric; // sum�� �÷��� ������ ����
	}
	int computer = sum - (multitap - 1); // ��Ƽ���� ���� - 1�� �� �÷��״� ��Ƽ�ǳ��� �����ϴµ� ���ǹǷ� �� �÷��� �������� ���־�� ��
	cout << computer << endl; // �� ���� ��ǻ�͸� ������ ������ �� �ִ��� ��� ���
	return 0;
}