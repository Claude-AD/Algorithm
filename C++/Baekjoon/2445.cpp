#include <iostream>
using namespace std;

int main()
{
	int num; // num번째 줄이 문제 도형의 중간이 된다.
	cin >> num; // 사용자로부터 입력받음

	// 문제의 도형을 num번째 줄까지의 윗부분과 그 아랫부분으로 나눈다.

	for (int i = 0; i < num; i++) // 윗부분 별찍기, 윗부분을 다시 왼쪽 별, 가운데 공백, 오른쪽 별로 나눈다.
	{
		for (int j = 0; j < i + 1; j++) // 왼쪽 별 찍기, 지금 N번째 줄이라면 N개의 별을 출력
		{
			cout << '*';
		}
		for (int k = 0; k < 2 * (num - i - 1); k++) // 가운데 공백, 지금 N번째 줄이라면 2*(num - N)개의 공백을 출력
		{
			cout << ' ';
		}
		for (int j = 0; j < i + 1; j++) // 오른쪽 별 찍기, 지금 N번째 줄이라면 N개의 별을 출력
		{
			cout << '*';
		}
		cout << '\n'; // 줄이 끝날 때 마다 개행문자 출력
	}

	for (int i = 0; i < num; i++) // 아랫부분 별찍기, 윗부분과 마찬가지로 세 부분으로 나눈다. num번째 줄 이후로 다시 첫째 줄 부터 시작하는 것으로 가정
	{
		for (int j = 0; j < num - i - 1; j++) // 왼쪽 별 찍기, 지금 N번째 줄이라면 num - N개의 별을 출력
		{
			cout << '*';
		}
		for (int k = 0; k < 2 * (i + 1); k++) // 가운데 공백, 지금 N번째 줄이라면 2*N개의 공백을 출력
		{
			cout << ' ';
		}
		for (int j = 0; j < num - i - 1; j++) // 오른쪽 별 찍기, 지금 N번째 줄이라면 num - N개의 별을 출력
		{
			cout << '*';
		}
		cout << '\n'; // 줄이 끝날 때 마다 개행문자 출력
	}
	return 0;
}