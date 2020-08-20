#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
	string num; // 정렬할 수
	cin >> num; // 사용자로부터 입력받음

	sort(num.begin(), num.end(), greater<char>()); // 내림차순으로 num 정렬

	cout << num << endl; // 정렬된 num 출력
	return 0;
}