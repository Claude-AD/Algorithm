#include <iostream>
using namespace std;

int main()
{
	int score_sum, score_sub; // ������ ��, ������ ��
	cin >> score_sum >> score_sub; // ���� ���ʴ�� ����ڿ��� �Է¹���

	int score_team1, score_team2; // �� ���� ����
	score_team1 = (score_sum + score_sub) / 2; // �հ� ���� ���Ͽ� 2�� ������ �� ���� ������ ū ������ ���´�.
	score_team2 = score_sum - score_team1; // �� �� ������ �տ��� ���� ������ �� ������ ������ ���Ѵ�.

	// ���� �� ���� ���� �� �ϳ��� 0���� �۰ų� �� ���� ���� �Է°� ���� �ʴ´ٸ� �׷��� �հ� ���� ���� ��� ����� ���� ���̹Ƿ� -1 ���
	if (score_team1 < 0 || score_team2 < 0 || score_team1 - score_team2 != score_sub)
		cout << -1 << endl;
	else // �ƴ϶�� ������ ���� �� �ʺ��� �� ���� ���� ���
		cout << score_team1 << " " << score_team2 << endl;

	return 0;
}

