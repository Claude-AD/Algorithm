#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int num; // 입력할 숫자의 개수
	cin >> num; // 사용자로부터 입력받음

	int* arr = new int[num]; // 사용자로부터 입력받은 개수만큼 정수배열 동적할당
	for (int i = 0; i < num; i++) { // 사용자로부터 정수배열 원소 입력받음
		cin >> arr[i];
	}

	sort(arr, arr + num); // 오름차순으로 정렬
	for (int i = 0; i < num; i++) { // 한 줄에 하나씩 정렬된 원소 출력
		cout << arr[i] << endl;
	}

	delete[] arr; // 동적할당 해제
	return 0;
}