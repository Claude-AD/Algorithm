#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int test_case;						// �׽�Ʈ ���̽��� ���� ����
	scanf("%d", &test_case);			// �׽�Ʈ ���̽��� ���� �Է�

	for (int i = 0; i < test_case; i++) // �׽�Ʈ ���̽� ���� ��ŭ ����
	{
		int num;						// �Է��� �ڿ����� ���� ����
		int sum = 0;					// �Է��� �ڿ������� ��
		scanf("%d", &num);				// �Է��� �ڿ����� ���� �Է�

		for (int j = 0; j < num; j++)	// �Է��� �ڿ����� ���� ���� ��ŭ
		{
			int n; // �ڿ���
			scanf("%d", &n);			// �ڿ��� �Է�
			sum += n;					// �Է��� �ڿ������� �� ������ �����ش�
		}
		
		printf("%d\n", sum);			// �ڿ������� �� ���
	}
	return 0;							// main�Լ� ����
}