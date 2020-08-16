#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int row_size, col_size; // 2차원 배열의 row크기, column크기
	cin >> row_size >> col_size; // 사용자로부터 입력받음

	vector<vector<int>> arr(row_size, vector<int>(col_size, 0)); // 벡터를 이용하여 입력받은 크기로 2차원 배열 선언, 0으로 초기화

	for (int i = 0; i < row_size; i++) { // 2차원 배열의 원소를 입력받음
		for (int j = 0; j < col_size; j++) {
			cin >> arr[i][j];
		}
	}

	int test_case; // 테스트 케이스 개수
	cin >> test_case; // 사용자로부터 입력받음

	for (int T = 0; T < test_case; T++) { // 테스트 케이스 하나 당
		int i, j, x, y; // (i, j), (x, y)좌표
		cin >> i >> j >> x >> y; // 사용자로부터 입력받음

		int sum = 0; // 원소들의 총 합
		for (int m = i - 1; m < x; m++) { // 입력받은 (i, j)원소부터 (x, y)원소까지
			for (int n = j - 1; n < y; n++) {
				sum += arr[m][n]; // 총 합 변수에 더해줌
			}
		}
		cout << sum << endl; // 총 합 출력
	}
	return 0;
}