#include <iostream>
using namespace std;

int main()
{
	int test_case; // �׽�Ʈ ���̽� ����
	cin >> test_case; // ����ڷκ��� �Է¹���

	for (int i = 0; i < test_case; i++) // �� �׽�Ʈ ���̽� ���� ����
	{
		int rifle, eye, ear, arm, leg; // ���� �ʿ��� ��ǰ���� ����
		cin >> rifle >> eye >> ear >> arm >> leg; // ����ڷκ��� �Է¹���

		double price = rifle * 350.34 + eye * 230.90 + ear * 190.55
			+ arm * 125.30 + leg * 180.90; // ��� �����ϴµ� �ʿ��� ���

		// �Ҽ��� �Ʒ� 2�ڸ����� ���

		cout << fixed; // �Ҽ����� �������� ǥ��
		cout.precision(2); // 2�ڸ����� ǥ��
		cout << "$" << price << endl; // �� ��� ���
	}
	return 0;
}