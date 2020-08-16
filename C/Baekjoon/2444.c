#include <stdio.h>

int main()
{
	int num; // num번째 줄이 다이아몬드의 중간이 된다.
	scanf("%d", &num); // 사용자로부터 입력받음

	// 다이아몬드를 num번째 줄까지의 윗부분(삼각형)과 그 아랫부분(역삼각형)으로 나눈다.
	for (int i = 0; i < num; i++) { // 윗부분 별찍기
		for (int j = 0; j < num-i-1; j++) { // 지금 N번째 줄이라면 num - N만큼 공백을 출력
			printf(" ");
		}
		for (int k = 0; k < 2*i+1; k++) { // 지금 N번째 줄이라면 2*N - 1만큼 별을 출력
			printf("*");
		}
		printf("\n"); // 줄이 끝날 때 마다 개행문자 출력
	}
	for (int i = 0; i < num - 1; i++) { // 아랫부분 별찍기, num번째 줄 이후로 다시 첫째 줄 부터 시작하는 것으로 가정
		for (int j = 0; j < i + 1; j++) { // 지금 N번째 줄이라면 N만큼 공백을 출력
	  	printf(" ");
		}
		for (int k = 0; k < 2 * (num - i - 1) - 1; k++) { // 지금 N번째 줄이라면 2*(num - N) - 1만큼 별을 출력
			printf("*");
		}
		printf("\n"); // 줄이 끝날 때 마다 개행문자 출력
	}
	return 0;
}
