#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num; // 몇 번째 줄까지 별을 출력할 것인지
	scanf("%d", &num); // 사용자로부터 입력받음

	for (int i = 0; i < num; i++) { // 지금 몇 번째 줄인지 나타냄 
		for (int j = 0; j < i; j++) { // 지금 N번째 줄이라면 공백 N - 1개를 찍음
			printf(" ");
		}
		/*
			지금 N번째 줄이라면 별 2*(num - N) + 1개를 찍음
			아래 반복문에서는 k가 0부터 시작하므로 2*(num-i)-1로 작성
		*/
		for (int k = 0; k < 2 * (num - i) - 1; k++) {
			printf("*");
		}
		printf("\n"); // 줄이 끝날 때 마다 개행문자 출력
	}
	return 0;
}