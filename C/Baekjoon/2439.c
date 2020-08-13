#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num; // 몇 번째 줄까지 별을 출력할 것인지
	scanf("%d", &num); // 사용자로부터 입력받음

	for (int i = 0; i < num; i++) { // 지금 몇 번째 줄인지 나타냄
		for (int j = 0; j < num - (i + 1); j++) // 지금 N번째 줄이라면 공백 num - N개를 찍음
			printf(" ");

		for (int k = 0; k < i + 1; k++)  // 지금 N번째 줄이라면 별 N개를 찍음
			printf("*");
		printf("\n"); // 줄이 끝날 때 마다 개행문자 출력
	}

	return 0;
}