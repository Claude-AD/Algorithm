#include <iostream>
#include <string>
using namespace std;

int main()
{
	int test_case; // �׽�Ʈ ���̽� ����
	cin >> test_case; // ����ڷκ��� �Է¹���

	for (int i = 0; i < test_case; i++) { // �׽�Ʈ���̽� �ѹ� ��
		string ox_result; // OX ���� ��� ���ڿ�
		cin >> ox_result; // ����ڷκ��� �Է¹���

		int score_sum = 0; // ������ �� ��
		int score_quiz = 1; // �� ������ ����
		for (int j = 0; j < ox_result.length(); j++) { // OX ���� ���� �ϳ� ��
			if (ox_result[j] == 'O') { // ����� O ���
				score_sum += score_quiz; // ������ �� �տ� ������ ������ ���ϰ�
				score_quiz++; // ������ ������ 1 ������Ŵ
			}
			else if (ox_result[j] == 'X') { // ����� X ���
				score_quiz = 1; // ������ ������ �ٽ� 1�� �ǵ���
			}
		}
		cout << score_sum << endl; // ������ ���� ���
	}
	return 0;
}
