#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num; // �� ��° �ٱ��� ���� ����� ������
	scanf("%d", &num); // ����ڷκ��� �Է¹���

	for (int i = 0; i < num; i++) { // ���� �� ��° ������ ��Ÿ��
		for (int j = 0; j < i + 1; j++)  // ���� N��° ���̶�� �� N���� ����
			printf("*");
		printf("\n"); // ���� ���� �� ���� ���๮�� ���
	}

	return 0;
}