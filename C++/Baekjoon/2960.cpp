#include <iostream>
#include <vector>
using namespace std;

int main()
{
	/*
	에라토스테네스의 체 알고리즘
	1. 2부터 N까지 모든 정수를 적는다.
	2. 아직 지우지 않은 수 중 가장 작은 수를 찾는다. 이것을 P라고 하고, 이 수는 소수이다.
	3. P를 지우고, 아직 지우지 않은 P의 배수를 크기 순서대로 지운다.
	4. 아직 모든 수를 지우지 않았다면, 다시 2번 단계로 간다.
	*/

	int N, K;
	cin >> N >> K;

	vector<int> nums;
	for (int i = 2; i <= N; i++) {
		nums.push_back(i);
	}

	int erase_count = 0;
	while (nums.size() != 0) {
		vector<int>::iterator it;
		
	}
	return 0;
}