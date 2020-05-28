#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int test_case;						// 테스트 케이스의 개수 변수
	scanf("%d", &test_case);			// 테스트 케이스의 개수 입력

	for (int i = 0; i < test_case; i++) // 테스트 케이스 개수 만큼 실행
	{
		int num;						// 입력할 자연수의 개수 변수
		int sum = 0;					// 입력한 자연수들의 합
		scanf("%d", &num);				// 입력할 자연수의 개수 입력

		for (int j = 0; j < num; j++)	// 입력한 자연수의 개수 변수 만큼
		{
			int n; // 자연수
			scanf("%d", &n);			// 자연수 입력
			sum += n;					// 입력한 자연수들의 합 변수에 더해준다
		}
		
		printf("%d\n", sum);			// 자연수들의 합 출력
	}
	return 0;							// main함수 종료
}