#include <iostream>
using namespace std;

int main()
{
	
	// 1 2 2 3 3 3 4 ... 의 수열, A와 B가 1부터 1000까지이므로 크기가 1000인 배열 생성
	int progression[1000] = { 0 }; 
	int num = 1; // 수열에 들어갈 정수
	int index = 0; // 수열의 인덱스

	while (index < 1000) { // 수열의 끝까지 정수를 저장
		for (int i = 0; i < num; i++) { // 정수를 정수의 크기만큼 저장 (1은 한 개, 2는 두 개, ... )
			progression[index] = num;
			index++;

			if (index == 1000) // 정수를 저장하는 도중 수열의 끝에 도달하면 반복문 탈출
				break;
		}
		num++; // 정수를 정수의 크기만큼 모두 저장한 뒤 다음 정수로 넘어감
	}

	int start, end; // 덧셈을 할 구간
	cin >> start >> end; // 사용자로부터 입력받음

	int result = 0; // 덧셈 결과
	int result_idx = start - 1; // 덧셈을 할 구간의 정수를 수열로부터 받아오기 위한 인덱스
	while (result_idx < end) { // 구간의 끝까지
		result += progression[result_idx]; // 덧셈 결과에 덧셈 구간의 정수를 더함
		result_idx++;
	}

	cout << result << endl; // 결과 출력

	return 0;
}