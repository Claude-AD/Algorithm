#include <iostream>
using namespace std;

int main()
{
	int test_case; // 테스트 케이스의 개수
	cin >> test_case; // 사용자로부터 입력받음

	for (int i = 0; i < test_case; i++) // 테스트 케이스의 수만큼 반복
	{
		int sum = 0; // 자연수의 합
		int num; // 자연수의 개수(N)
		cin >> num; // N을 사용자로부터 입력받음

		for (int i = 0; i < num; i++) // N번 반복
		{
			int natural_number; // 자연수
			cin >> natural_number; // 자연수를 사용자로부터 입력받음
			sum += natural_number; // 입력받은 자연수를 sum에다가 더해줌 
		}
		cout << sum << endl; // 입력받은 N개 자연수의 총합 출력
	}
	return 0;
}