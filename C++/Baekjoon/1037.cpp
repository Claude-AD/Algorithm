#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int number_of_divisor; // '진짜'약수의 개수	 
	cin >> number_of_divisor; // 사용자로부터 입력받음

	int* divisor_arr = new int[number_of_divisor]; // '진짜'약수를 넣을 배열을 동적배열로 생성
	for (int i = 0; i < number_of_divisor; i++) // '진짜'약수를 사용자로부터 입력받음
		cin >> divisor_arr[i];

	sort(divisor_arr, divisor_arr + number_of_divisor); // '진짜'약수를 크기순으로 정렬

	/* sort함수를 사용하지 않고 직접 구현한 배열 정렬
	for (int i = 0; i < number_of_divisor; i++) {
		for (int j = 0; j < number_of_divisor - 1; j++) {
			if (divisor_arr[j] > divisor_arr[j + 1]) {
				int temp = divisor_arr[j];
				divisor_arr[j] = divisor_arr[j + 1];
				divisor_arr[j + 1] = temp;
			}
		}
	}
	*/

	cout << divisor_arr[0] * divisor_arr[number_of_divisor - 1] << endl; // N의 약수 중 두개씩 짝을 지어 곱하면 N이 되는 성질을 이용
																		 // 크기순으로 정렬한 '진짜'약수 중 가장 작은 약수와 가장 큰 약수를 곱하여 출력
	
	delete[] divisor_arr; // 동적할당 해제
	return 0;
}