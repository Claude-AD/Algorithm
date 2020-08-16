#include <iostream>
using namespace std;

int main()
{
	int score_sum, score_sub; // 점수의 합, 점수의 차
	cin >> score_sum >> score_sub; // 각각 차례대로 사용자에게 입력받음

	int score_team1, score_team2; // 각 팀의 점수
	score_team1 = (score_sum + score_sub) / 2; // 합과 차를 더하여 2로 나누면 두 팀의 점수중 큰 점수가 나온다.
	score_team2 = score_sum - score_team1; // 두 팀 점수의 합에서 위의 점수를 빼 나머지 점수를 구한다.

	/*
	만약 두 팀의 점수 차가 합보다 크거나 합과 차를 더했을 때 홀수가 나온다면 그러한 합과 차를 갖는 경기 결과가 없는 것이므로 -1 출력
	두 팀의 점수 합과 차를 더했을 때 홀수가 나오면 점수가 소수로 나오기 때문
	*/
	if (score_sub > score_sum || (score_sum + score_sub) % 2 == 1)
		cout << -1 << endl;
	else // 아니라면 득점을 많이 한 쪽부터 두 팀의 점수 출력
		cout << score_team1 << " " << score_team2 << endl;

	return 0;
}
