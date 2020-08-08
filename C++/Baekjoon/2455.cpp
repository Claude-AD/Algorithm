#include <iostream>
using namespace std;

int main()
{
	/*
	내리고 타는 사람들을 기록하기 위한 이차원 배열
	0번째 열이 내린 사람 수, 1번째 열이 탄 사람 수
	*/
	int people[4][2];
	for (int i = 0; i < 4; i++) { // 사용자로부터 입력받음
		for (int j = 0; j < 2; j++) {
			cin >> people[i][j];
		}
	}

	int after_station[3] = { 0 }; // 각각 1,2,3번역을 지나고 나서 기차에 타고있는 사람 수
	after_station[0] = people[0][1]; // 1번역은 내린 사람 수가 없으므로 탄 사람 수만 계산

	int max_people = after_station[0]; // 가장 사람이 많을 때의 수, 초기값은 1번역을 지나고 난 사람 수
	for (int i = 1; i < 3; i++) {
		/*
		2,3번역을 지나고 나서 기차에 타고있는 사람 수
		각각 기차에 타고 있던 사람 수 - 내린 사람 수 + 탄 사람 수로 계산
		*/
		after_station[i] = after_station[i - 1] - people[i][0] + people[i][1]; 
		if (after_station[i] > max_people) // 역을 지날 때마다 가장 사람이 많을 때의 수를 비교함
			max_people = after_station[i];
	}
	
	cout << max_people << endl; // 결과 출력

	return 0;
}