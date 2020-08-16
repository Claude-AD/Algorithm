#include <iostream>
#include <string>
using namespace std;

int main()
{
	int test_case; // 테스트 케이스 개수
	cin >> test_case; // 사용자로부터 입력받음

	for (int i = 0; i < test_case; i++) { // 테스트케이스 한번 당
		string ox_result; // OX 퀴즈 결과 문자열
		cin >> ox_result; // 사용자로부터 입력받음

		int score_sum = 0; // 점수의 총 합
		int score_quiz = 1; // 각 문제의 점수
		for (int j = 0; j < ox_result.length(); j++) { // OX 퀴즈 문제 하나 당
			if (ox_result[j] == 'O') { // 결과가 O 라면
				score_sum += score_quiz; // 점수의 총 합에 문제의 점수를 더하고
				score_quiz++; // 문제의 점수를 1 증가시킴
			}
			else if (ox_result[j] == 'X') { // 결과가 X 라면
				score_quiz = 1; // 문제의 점수를 다시 1로 되돌림
			}
		}
		cout << score_sum << endl; // 점수의 총합 출력
	}
	return 0;
}
