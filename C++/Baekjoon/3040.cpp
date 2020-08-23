#include <iostream>
using namespace std;

int main()
{
	int dwarf[9] = { 0 }; // 아홉 난쟁이의 숫자를 저장할 배열
	int sum = 0; // 숫자들의 총 합
	for (int i = 0; i < 9; i++) {
		cin >> dwarf[i]; // 아홉 난쟁이의 숫자를 사용자로부터 입력받음
		sum += dwarf[i]; // 아홉 난쟁이의 숫자를 모두 더함
	}
	
	for (int i = 0; i < 8; i++) { // 아홉 난쟁이의 숫자 중 차례대로 각각 두개씩
		for (int j = i + 1; j < 9; j++) { 
			if (sum - dwarf[i] - dwarf[j] == 100) { // 총 합에서 뺐을 때 100이 나온다면 그 두 명이 일곱 난쟁이가 아니므로
				for (int k = 0; k < 9; k++) { // 아홉 난쟁이의 숫자 중
					if (k != i && k != j) // 그 두 난쟁이의 숫자를 제외하고
						cout << dwarf[k] << endl; // 화면에 출력 후
				}
				return 0; // 메인함수 종료
			}
		}
	}
}