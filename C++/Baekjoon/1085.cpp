#include <iostream>
using namespace std;

int main()
{
	int x, y, w, h; // 직사각형 내부의 현재 위치(x, y), 직사각형의 오른쪽 상단 꼭짓점(w, h)
	cin >> x >> y >> w >> h; // 사용자로부터 입력받음

	int length[4] = { x, y, w - x, h - y }; // 점 (x, y)로부터 직사각형 각 변까지의 거리
	int min = length[0]; // 최솟값, 기본값을 length[0]으로 설정
	for (int i = 1; i < 4; i++) // 각 변까지의 거리와 최솟값 변수를 비교하여
	{
		if (length[i] <= min) // 최솟값 변수보다 해당 변까지의 거리가 더 작다면
			min = length[i]; // 최솟값 변수 교체
	}

	cout << min << endl; // 최솟값 출력
	return 0;
}