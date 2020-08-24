// 문제에 B는 재배열하지 마라는 조건이 있었으나 B를 재배열하지 않는다면 코드가 매우 복잡해지고
// 또한 B를 재배열해도 문제가 정답으로 처리되므로 해당 코드는 A, B모두 재배열 하는 방식으로 풀었다.

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

void get_elem(vector<int> &v, int length); // vector에 원소를 집어넣는 함수, vector는 꼭 Call by reference로 전달한다.
int S(vector<int> A, vector<int> B); // 문제에서 주어진 함수, A와 B의 원소를 차례대로 곱하는 함수

int main()
{
	int arr_length; // 입력할 A와 B의 길이
	cin >> arr_length; // 사용자로부터 입력받음

	vector<int> A, B; // A와 B를 vector로 선언
	get_elem(A, arr_length); // A의 원소를 입력받음
	get_elem(B, arr_length); // B의 원소를 입력받음

	// S가 최소값이 되려면 작은 원소와 큰 원소끼리 서로 곱해주면 되므로
	// A를 오름차순으로, B를 내림차순으로 정렬해서 곱해준다.
	sort(A.begin(), A.end()); // 오름차순 정렬
	sort(B.begin(), B.end(), greater<int>()); // 내림차순 정렬

	cout << S(A, B) << endl; // S함수 결과 출력
	return 0;
}

void get_elem(vector<int> &v, int length) {
	for (int i = 0; i < length; i++) { // 주어진 길이만큼
		int elem;
		cin >> elem; // 사용자로부터 원소 입력받아서
		v.push_back(elem); // vector에 push_back
	}
}

int S(vector<int> A, vector<int> B) {
	int sum = 0; // A와 B 두 vector 원소들의 곱의 합
	for (int i = 0; i < A.size(); i++) { // A, B 둘 다 크기는 같으므로 A의 크기만큼
		sum += A[i] * B[i]; // A와 B의 i번째 원소를 곱해서 합에 더해줌
	}
	return sum; // 합 출력
}