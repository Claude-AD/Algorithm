#include <iostream>
using namespace std;

int main()
{
	int score_sum, score_sub; // ������ ��, ������ ��
	cin >> score_sum >> score_sub; // ���� ���ʴ�� ����ڿ��� �Է¹���

	int score_team1, score_team2; // �� ���� ����
	score_team1 = (score_sum + score_sub) / 2; // �հ� ���� ���Ͽ� 2�� ������ �� ���� ������ ū ������ ���´�.
	score_team2 = score_sum - score_team1; // �� �� ������ �տ��� ���� ������ �� ������ ������ ���Ѵ�.

	/*
	���� �� ���� ���� ���� �պ��� ũ�ų� �հ� ���� ������ �� Ȧ���� ���´ٸ� �׷��� �հ� ���� ���� ��� ����� ���� ���̹Ƿ� -1 ���
	�� ���� ���� �հ� ���� ������ �� Ȧ���� ������ ������ �Ҽ��� ������ ����
	*/
	if (score_sub > score_sum || (score_sum + score_sub) % 2 == 1)
		cout << -1 << endl;
	else // �ƴ϶�� ������ ���� �� �ʺ��� �� ���� ���� ���
		cout << score_team1 << " " << score_team2 << endl;

	return 0;
}
