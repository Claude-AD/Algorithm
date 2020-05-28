#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int lines;		// 몇 줄 출력할 것인지에 대한 변수
	scanf("%d", &lines);	// 몇 줄 출력할 것인지 입력

	for (int i = 0; i < lines; i++)		// 입력한 횟수 만큼
		printf("Hello Algospot!\n");	// Hello Algospot! 출력

	return 0;	// main함수 종료
}