#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num; // �� ��° �ٱ��� ���� ����� ������
	scanf("%d", &num); // ����ڷκ��� �Է¹���

	for (int i = 0; i < num; i++) { // ���� �� ��° ������ ��Ÿ��
		for (int j = 0; j < num - (i + 1); j++) // ���� N��° ���̶�� ���� num - N���� ����
			printf(" ");

		for (int k = 0; k < i + 1; k++)  // ���� N��° ���̶�� �� N���� ����
			printf("*");
		printf("\n"); // ���� ���� �� ���� ���๮�� ���
	}

	return 0;
}