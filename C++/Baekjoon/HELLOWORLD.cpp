#include <iostream>
using namespace std;

int main()
{
	int test_case; // �λ��� ����� ���
	cin >> test_case; // ����ڷκ��� �Է¹���
	string* name = new string[test_case]; // �λ��� ����� �����ŭ string�迭 �����Ҵ�

	for (int i = 0; i < test_case; i++) // ����ڷκ��� �λ��� ����� �̸��� ���ʴ�� �Է¹���
	{
		cin >> name[i];
	}
	cout << '\n';

	for (int i = 0; i < test_case; i++) // ��� ����ڿ� ���Ͽ� Hello, (����� �̸�)!�� ��� 
	{
		cout << "Hello, " + name[i] + '!';
		cout << endl;
	}

	delete[] name; // �����Ҵ� ����
	return 0;
}