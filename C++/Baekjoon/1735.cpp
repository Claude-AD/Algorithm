#include <iostream>
using namespace std;

// 분자, 분모를 최대공약수로 나누어주면 기약분수가 되므로 최대공약수를 구하는 함수 생성
int gcd(int a, int b); // 최대공약수를 구하는 함수

int main()
{
	int fraction_A[2], fraction_B[2], fraction_result[2]; // 분수 A, B 그리고 A와 B를 더한 분수
	cin >> fraction_A[0] >> fraction_A[1] >> fraction_B[0] >> fraction_B[1]; // A와 B를 사용자로부터 분자, 분모 순서대로 입력받음

	// 분수 A, B끼리 더하는 과정
	fraction_result[1] = fraction_A[1] * fraction_B[1]; // 분모는 A분모 * B분모
	fraction_result[0] = fraction_A[0] * fraction_B[1] + fraction_A[1] * fraction_B[0]; // 분자는 A분자 * B분모 + A분모 * B분자

	int num = gcd(fraction_result[0], fraction_result[1]); // A와 B를 더한 분수의 분모와 분자의 최대공약수
	fraction_result[0] /= num; // 분자를 최대공약수로 나누어줌
	fraction_result[1] /= num; // 분모를 최대공약수로 나누어줌

	cout << fraction_result[0] << " " << fraction_result[1] << endl; // 분자, 분모 순서대로 출력
	return 0;
}

/*
유클리드 호제법이란?
2개의 자연수(또는 정식) a, b에 대해서 a를 b로 나눈 나머지를 r이라 하면(단, a>b), a와 b의 최대공약수는 b와 r의 최대공약수와 같다.
이 성질에 따라, b를 r로 나눈 나머지 r'를 구하고, 다시 r을 r'로 나눈 나머지를 구하는 과정을 반복하여 나머지가 0이 되었을 때 나누는 수가 a와 b의 최대공약수이다.
*/

int gcd(int a, int b) { // 유클리드 호제법으로 최대공약수를 구함
	while (b != 0) {
		int r = a % b; 
		a = b;
		b = r;
	}
	return a;
}