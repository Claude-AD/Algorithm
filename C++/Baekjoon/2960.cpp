#include <iostream>
#include <vector>
using namespace std;

int main()
{
	/*
	�����佺�׳׽��� ü �˰���
	1. 2���� N���� ��� ������ ���´�.
	2. ���� ������ ���� �� �� ���� ���� ���� ã�´�. �̰��� P��� �ϰ�, �� ���� �Ҽ��̴�.
	3. P�� �����, ���� ������ ���� P�� ����� ũ�� ������� �����.
	4. ���� ��� ���� ������ �ʾҴٸ�, �ٽ� 2�� �ܰ�� ����.
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