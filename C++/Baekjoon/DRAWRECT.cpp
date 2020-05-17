#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	/* 사각형의 세 좌표가 주어지고 나머지 한 좌표를 구하는 문제의 규칙은 x좌표 y좌표 각각 두번씩 나오지 않은 값을 찾으면 된다. */
	int test_case;		
	cin >> test_case;					// test case 횟수 입력
	for (int t = 0; t < test_case; t++) // 입력한 test case 횟수 동안
	{
		int rect[3][2];					// 사각형의 세 좌표를 입력할 이차원 배열 생성
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 2; j++)
				cin >> rect[i][j];		// 사각형의 세 좌표 입력
		}
		int point[2] = { 0 };			// 나머지 한 좌표를 입력할 배열 생성
		
		/*
		for (int k = 0; k < 2; k++)		// x좌표, y좌표 모두 코드가 같으므로 for문으로 처리. 아래 설명은 x좌표 기준
		{
			if (rect[0][k] == rect[1][k]) // 첫번째 x좌표와 두번째 x좌표가 같으면
				point[k] = rect[2][k];	// 세번째 x좌표가 사각형의 나머지 한 좌표의 x좌표
			else						
			{							// 첫번째 x좌표와 두번째 x좌표가 다르면
				if (rect[0][k] == rect[2][k]) // 첫번째 x좌표와 세번째 x좌표를 비교해서 같으면
					point[k] = rect[1][k]; // 두번째 x좌표가 사각형 나머지 한 좌표의 x좌표
				else if (rect[0][k] != rect[2][k]) // 다르면
					point[k] = rect[0][k]; // 첫번째 x좌표가 사각형 나머지 한 좌표의 x좌표
			}
		}
		*/

		// 비트 XOR연산자를 사용하면 더 간결하게 해결할 수 있다.
		point[0] = rect[0][0] ^ rect[1][0] ^ rect[2][0];
		point[1] = rect[0][1] ^ rect[1][1] ^ rect[2][1];
		cout << point[0] << ' ' << point[1] << endl; // x좌표, y좌표 차례대로 출력
	}
	return 0;
}
