#include <iostream>
using namespace std;

int main()
{
	string password;
	cout << "�� ��ȣ�� �Է��ϼ���>>";
	cin >> password;

	string check;
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
	cin >> check;

	if (password == check)
	{
		cout << "�����ϴ�\n";
	}
	else
	{
		cout << "���� �ʽ��ϴ�\n";
	}
	return 0;
}