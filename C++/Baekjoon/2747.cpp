// 재귀함수를 이용한 풀이법은 Runtime-Error가 나서 for문으로 문제 해결

#include <iostream>
using namespace std;

int main()
{
	int num; // 몇 번째 피보나치 수를 찾을 것인지
	cin >> num; // 사용자로부터 입력받음

	if (num == 0 || num == 1) // 0이나 1을 입력받으면
	{
		cout << num << endl; // 각각 0과 1을 출력
	}

	else
	{
		int zero = 0; // n - 2번째 피보나치 수
		int one = 1; // n - 1번째 피보나치 수
		int fibo = 0; // n번째 피보나치 수

		/*
		사용자로부터 입력받은 수가 N이라고 했을 때 N번째 피보나치 수를 구하기 위해
		아래 반복문을 N-1번 반복한다.
		*/

		for (int i = 1; i < num; i++) 
		{
			fibo = zero + one; // n - 2번째 피보나치 수와 n - 1번째 피보나치 수를 더해서 n번째 피보나치 수를 구함
			zero = one; // n - 1번째 피보나치 수를 n - 2번째 피보나치 수로 변경
			one = fibo; // n번째 피보나치 수를 n - 1번째 피보나치 수로 변경
		}
		cout << fibo << endl; // N번째 피보나치 수 출력
	}
	return 0;
}