#include <iostream>
using namespace std;

int main()
{
	int num; // 몇 번째 줄까지 별을 출력할 것인지
	cin >> num; // 사용자로부터 입력받음

	for (int i = 1; i <= num; i++) // 지금 몇 번째 줄인지 나타냄
	{
		for (int j = 0; j < num-i; j++) // 지금 N번째 줄이라면 공백 num - N개를 찍음
		{
			cout << ' ';
		}
		for (int k = 0; k < i; k++) // 지금 N번째 줄이라면 별 N개를 찍음
		{
			cout << '*';
		}
		cout << '\n'; // 줄이 끝날 때 마다 개행문자 출력
	}
	return 0;
}