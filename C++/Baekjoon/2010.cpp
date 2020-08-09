#include <iostream>
using namespace std;

int main()
{
	int multitap; // 멀티탭 개수
	cin >> multitap; // 사용자로부터 입력받음

	int sum = 0; // 총 플러그 개수
	for (int i = 0; i < multitap; i++)
	{
		int electric; // 플러그 개수
		cin >> electric; // 사용자로부터 입력받음
		sum += electric; // sum에 플러그 개수를 더함
	}
	int computer = sum - (multitap - 1); // 멀티탭의 개수 - 1개 의 플러그는 멀티탭끼리 연결하는데 사용되므로 총 플러그 개수에서 빼주어야 함
	cout << computer << endl; // 몇 대의 컴퓨터를 전원에 연결할 수 있는지 결과 출력
	return 0;
}