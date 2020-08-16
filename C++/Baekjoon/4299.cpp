#include <iostream>
using namespace std;

int main()
{
	int score_sum, score_sub; // 점수의 합, 점수의 차
	cin >> score_sum >> score_sub; // 각각 차례대로 사용자에게 입력받음

	int score_team1, score_team2; // 각 팀의 점수
	score_team1 = (score_sum + score_sub) / 2; // 합과 차를 더하여 2로 나누면 두 팀의 점수중 큰 점수가 나온다.
	score_team2 = score_sum - score_team1; // 두 팀 점수의 합에서 위의 점수를 빼 나머지 점수를 구한다.

	// 만약 두 팀의 점수 중 하나라도 0보다 작거나 두 팀의 차가 입력과 맞지 않는다면 그러한 합과 차를 갖는 경기 결과가 없는 것이므로 -1 출력
	if (score_team1 < 0 || score_team2 < 0 || score_team1 - score_team2 != score_sub)
		cout << -1 << endl;
	else // 아니라면 득점을 많이 한 쪽부터 두 팀의 점수 출력
		cout << score_team1 << " " << score_team2 << endl;

	return 0;
}

