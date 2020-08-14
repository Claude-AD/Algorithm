#include <iostream>
#include <string>
using namespace std;

int main()
{
	string hex_str; // 문자열로 된 16진수 hex_str
	cin >> hex_str; // 사용자로부터 입력받음

	int dec = 0; // 16진수를 변환한 10진수를 저장할 변수 dec
	for (int i = 0; i < hex_str.length(); i++) { // 문자열의 길이만큼, 즉 16진수 각 자리수 마다
		/*
		16을 먼저 곱해주는 이유는 16진수의 첫번째 자리에는 16을 곱하지 않고 1을 곱하기 때문
		반복문을 돌면서 각 자리수에 알맞은 횟수로 16을 곱함
		*/
		dec *= 16; 

		if (hex_str[i] >= 'A' && hex_str[i] <= 'F') // 16진수가 A ~ F면
			dec += hex_str[i] - 'A' + 10; // ASCII코드 값의 차이를 이용하여 정수 10 ~ 15로 변환
		else // 16진수가 0 - 9면
			dec += hex_str[i] - '0'; // ASCII코드 값의 차이를 이용하여 정수 0 ~ 9로 변환
	}

	cout << dec << endl; // 변환 완료된 10진수 출력
	
	/* 또는 간단하게 다음과 같이 hex를 사용하여
	16진수로 입력받고 10진수로 출력하는 방법으로 해결할 수 있다.
	
	int num;
	cin >> hex >> num;
	cout << num << endl;
	*/

	return 0;
}

