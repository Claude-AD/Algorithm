#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num; // �� ��° �ٱ��� ���� ����� ������
	scanf("%d", &num); // ����ڷκ��� �Է¹���

	for (int i = 0; i < num; i++) { // ���� �� ��° ������ ��Ÿ�� 
		for (int j = 0; j < i; j++) { // ���� N��° ���̶�� ���� N - 1���� ����
			printf(" ");
		}
		/*
			���� N��° ���̶�� �� 2*(num - N) + 1���� ����
			�Ʒ� �ݺ��������� k�� 0���� �����ϹǷ� 2*(num-i)-1�� �ۼ�
		*/
		for (int k = 0; k < 2 * (num - i) - 1; k++) {
			printf("*");
		}
		printf("\n"); // ���� ���� �� ���� ���๮�� ���
	}
	return 0;
}