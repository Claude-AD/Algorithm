#include <iostream>
using namespace std;

int main()
{
	/*
	������ Ÿ�� ������� ����ϱ� ���� ������ �迭
	0��° ���� ���� ��� ��, 1��° ���� ź ��� ��
	*/
	int people[4][2];
	for (int i = 0; i < 4; i++) { // ����ڷκ��� �Է¹���
		for (int j = 0; j < 2; j++) {
			cin >> people[i][j];
		}
	}

	int after_station[3] = { 0 }; // ���� 1,2,3������ ������ ���� ������ Ÿ���ִ� ��� ��
	after_station[0] = people[0][1]; // 1������ ���� ��� ���� �����Ƿ� ź ��� ���� ���

	int max_people = after_station[0]; // ���� ����� ���� ���� ��, �ʱⰪ�� 1������ ������ �� ��� ��
	for (int i = 1; i < 3; i++) {
		/*
		2,3������ ������ ���� ������ Ÿ���ִ� ��� ��
		���� ������ Ÿ�� �ִ� ��� �� - ���� ��� �� + ź ��� ���� ���
		*/
		after_station[i] = after_station[i - 1] - people[i][0] + people[i][1]; 
		if (after_station[i] > max_people) // ���� ���� ������ ���� ����� ���� ���� ���� ����
			max_people = after_station[i];
	}
	
	cout << max_people << endl; // ��� ���

	return 0;
}