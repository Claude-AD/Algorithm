// 원래 코드의 방식이 결국 상점의 최대 좌표에서 상점의 최소 좌표를 뺀 뒤 2를 곱하면 최소거리가 나오는 알고리즘이므로 코드를 수정해보았다.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int test_case; // 테스트 케이스의 개수
	cin >> test_case; // 사용자로부터 입력받음

	while (test_case--) { // 테스트 케이스 한 개 당
		int shop_num; // 상점의 개수
		cin >> shop_num; // 사용자로부터 입력받음

		int min = 100, max = -1; // 상점 위치 최소, 최대값의 초기값 설정 (상점 위치의 범위가 0 <= x <= 99이므로)
		vector<int> shop; // 상점 배열을 벡터로 생성
		for (int i = 0; i < shop_num; i++) { // 상점의 개수만큼
			int shop_location;
			cin >> shop_location; // 상점의 위치를 입력받아서
			shop.push_back(shop_location); // 상점 위치배열에 저장

			max = (shop[i] > max) ? shop[i] : max; // 상점 위치 최대값 탐색
			min = (shop[i] < min) ? shop[i] : min; // 상점 위치 최소값 탐색
		}

		int min_distance = 2 * (max - min); // 최소 이동거리 계산
		cout << min_distance << endl; // 출력
	}
	return 0;
}

/* 
문제를 해결한 알고리즘은 상점 위치의 평균을 구한 뒤에 상점 위치들을 오름차순으로 정렬하고 
차를 평균 지점에 대고 상점을 순서대로 차례대로 들렀다가 다시 주차지점에 돌아오면 최소거리가 된다는 점을 이용하였다.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int test_case; // 테스트 케이스의 개수
	cin >> test_case; // 사용자로부터 입력받음

	for (int i = 0; i < test_case; i++) { // 테스트 케이스 한 개 당
		int shop_num; // 상점의 개수
		cin >> shop_num; // 사용자로부터 입력받음

		vector<int> shop_location; // 상점의 위치배열, 벡터로 선언, new-delete 동적할당으로 선언하니 sort함수에서 오류가 남
		int sum = 0; // 평균 지점을 구하기 위한 상점 위치들의 합
		for (int j = 0; j < shop_num; j++) { // 상점의 개수만큼
			int shop;
			cin >> shop; // 상점의 위치를 입력받아서
			shop_location.push_back(shop); // 상점 위치배열에 저장
			sum += shop; // sum 변수에 상점 위치를 더해줌
		}

		sort(shop_location.begin(), shop_location.end()); // sort함수로 상점 위치배열 오름차순으로 정렬

		int average = sum / shop_num; // 상점 위치들의 평균지점을 구함
		int min_distance = 0; // 최단 거리 변수
		min_distance += shop_location[shop_num - 1] - average; // 평균 지점에서 마지막 지점까지의 거리를 min_distance에 더해줌
		min_distance += average - shop_location[0]; // 처음 지점에서 평균 지점까지의 거리를 min_distance에 더해줌

		for (int j = 0; j < shop_num - 1; j++) { // 모든 상점들을 한번 씩 들러야 하므로
			min_distance += shop_location[j + 1] - shop_location[j]; // 상점들 사이의 거리를 모두 min_distance에 더해줌
		}
		cout << min_distance << endl; // 최단 거리 출력

	}
	return 0;
}
*/