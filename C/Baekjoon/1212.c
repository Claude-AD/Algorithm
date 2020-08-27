#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char* str = malloc(sizeof(char) * 333334); // 333,334�ڸ����� �Է¹��� �� �����Ƿ� �����Ҵ�
	scanf("%s", str); // ����ڷκ��� 8���� �Է¹���

	char* to_binary[2][8] = // ������ �Լ��� �����ϱ⿡ ������ �־ ������ �迭�� 2������ �־����
	{
		{"", "1", "10", "11", "100", "101", "110", "111"}, // �� ���� 0���� �������� �ʵ��� ���� �����Ѵ�.
		{"000", "001", "010", "011", "100", "101", "110", "111"}
	};

	int len = strlen(str);
	for (int i = 0; i < len; i++) {
		int binary = str[i] - '0'; // char�� ���ڸ� int������ �ٲ�

		if (binary == 0 && len == 1) { // 0 �ϳ��� �Է����� ��
			printf("0");
		}
		else {
			if (i == 0)
				printf("%s", to_binary[0][binary]); // ù��° ����
			else
				printf("%s", to_binary[1][binary]); // �� ���� ����
		}
	}
	printf("\n");

	free(str); // �����Ҵ� �޸� ����
	return 0;
}