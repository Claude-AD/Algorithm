#include <iostream>
using namespace std;

int main()
{
	int test_case; // �׽�Ʈ ���̽��� ����
	cin >> test_case; // ����ڷκ��� �Է¹���

	for (int i = 0; i < test_case; i++) // �׽�Ʈ ���̽��� ����ŭ �ݺ�
	{
		int sum = 0; // �ڿ����� ��
		int num; // �ڿ����� ����(N)
		cin >> num; // N�� ����ڷκ��� �Է¹���

		for (int i = 0; i < num; i++) // N�� �ݺ�
		{
			int natural_number; // �ڿ���
			cin >> natural_number; // �ڿ����� ����ڷκ��� �Է¹���
			sum += natural_number; // �Է¹��� �ڿ����� sum���ٰ� ������ 
		}
		cout << sum << endl; // �Է¹��� N�� �ڿ����� ���� ���
	}
	return 0;
}