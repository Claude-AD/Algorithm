#include <iostream>
#include <vector>
using namespace std;

/*
에라토스테네스의 체는 N보다 작거나 같은 모든 소수를 찾는 유명한 알고리즘이다.
N, K가 주어졌을 때, K번째 지우는 수를 구하는 프로그램을 작성하시오.
*/

int main() {
	int N, K; 
	int erase_count = 0; // K를 구하기 위해 사용될 변수
	cin >> N >> K;

	vector<int> v; // 2부터 N까지 모든 정수를 저장할 벡터
	vector<int> erase_v; // 지워진 수를 차례로 저장할 벡터

	// 2부터 N까지 v벡터에 저장
	for (int i = 2; i <= N; i++) {
		v.push_back(i); 
	}

	//v벡터에서 모든 수가 지워지기 전까지 반복
	while (!v.empty()) {
		erase_v.push_back(*v.begin()); // 아직 지우지 않은 수 중 가장 작은 수(v벡터의 처음에 있는 수)를 찾아 erase_v벡터에 저장
		v.erase(v.begin()); // 그 수를 지움
		erase_count++; // 수를 하나씩 지울 때마다 카운트를 하나씩 증가시킴
		
		int P = erase_v.back(); // 지운 수를 P라고 할 때
		for (int i = 0; i < v.size(); i++) { // v벡터 모든 원소에 대하여
			if (v[i] % P == 0) { // 만약 그 원소가 P의 배수라면
				erase_v.push_back(v[i]); // erase_v벡터에 저장하고
				erase_count++; // 카운트를 하나 증가시킨 후
				v.erase(v.begin() + i); // 지워버림
			}
		}
	}
	cout << erase_v[K - 1] << endl; // 1번째 지워진 수가 0번째 원소이므로 erase_v벡터에서 K-1번째 원소를 찾아서 출력
	return 0;
}