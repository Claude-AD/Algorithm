#include <iostream>
using namespace std;

int main()
{
	int test_case; // 테스트 케이스 개수
	cin >> test_case; // 사용자로부터 입력받음

	for (int i = 0; i < test_case; i++) // 각 테스트 케이스 마다 수행
	{
		int rifle, eye, ear, arm, leg; // 각각 필요한 부품들의 개수
		cin >> rifle >> eye >> ear >> arm >> leg; // 사용자로부터 입력받음

		double price = rifle * 350.34 + eye * 230.90 + ear * 190.55
			+ arm * 125.30 + leg * 180.90; // 모두 구매하는데 필요한 비용

		// 소수점 아래 2자리까지 출력

		cout << fixed; // 소수점을 고정시켜 표현
		cout.precision(2); // 2자리까지 표현
		cout << "$" << price << endl; // 총 비용 출력
	}
	return 0;
}