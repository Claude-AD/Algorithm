#include <iostream>
using namespace std;

int main()
{
	int num; // 주어지는 정수
	cin >> num; // 사용자로부터 입력받음
	
	int arr[2] = { 0 }; // 정수의 10의자리와 1의자리를 각각 저장할 배열, 0으로 초기화
	arr[0] = (num < 10) ? 0 : num / 10; // 정수의 10의자리, 정수가 10보다 작다면 0을 저장하고 그렇지 않다면 10으로 나눈 몫을 저장
	arr[1] = num % 10; // 정수의 1의자리, 정수를 10으로 나눈 나머지를 저장
	
	int original_tens = arr[0]; // 주어진 정수의 원래 10의자리를 따로 저장
	int original_units = arr[1]; // 주어진 정수의 원래 1의자리를 따로 저장
	int cycle = 0; // 더하기 사이클 수
	do {
		int sum = arr[0] + arr[1]; // 각 자리의 숫자를 더한다
		arr[0] = arr[1]; // 주어진 정수의 1의자리를 새로운 수의 10의자리로 만들고
		arr[1] = sum % 10; // 각 자리의 숫자를 더해서 만든 수의 1의자리를 새로운 수의 1의자리로 만든다
		cycle++; // 사이클 1씩 증가
	} while (arr[0] != original_tens || arr[1] != original_units); // 위 과정을 반복해 원래 수로 돌아오면 반복문 탈출
	
	cout << cycle << endl; // 더하기 사이클 출력
	return 0;
}