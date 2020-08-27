#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char* str = malloc(sizeof(char) * 333334); // 333,334자리까지 입력받을 수 있으므로 동적할당
	scanf("%s", str); // 사용자로부터 8진수 입력받음

	char* to_binary[2][8] = // 이진수 함수로 구현하기에 무리가 있어서 이차원 배열에 2진수를 넣어놓음
	{
		{"", "1", "10", "11", "100", "101", "110", "111"}, // 맨 앞이 0으로 시작하지 않도록 따로 저장한다.
		{"000", "001", "010", "011", "100", "101", "110", "111"}
	};

	int len = strlen(str);
	for (int i = 0; i < len; i++) {
		int binary = str[i] - '0'; // char형 숫자를 int형으로 바꿈

		if (binary == 0 && len == 1) { // 0 하나만 입력했을 때
			printf("0");
		}
		else {
			if (i == 0)
				printf("%s", to_binary[0][binary]); // 첫번째 숫자
			else
				printf("%s", to_binary[1][binary]); // 그 이후 숫자
		}
	}
	printf("\n");

	free(str); // 동적할당 메모리 해제
	return 0;
}