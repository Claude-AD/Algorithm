#include <iostream>
using namespace std;

int main()
{
	int climb, slip, stick_height; // 달팽이가 낮에 올라가는 거리, 밤에 미끄러지는 거리, 나무 막대의 총 길이
	cin >> climb >> slip >> stick_height; // 사용자로부터 입력받음
	
	/*
	달팽이는 하루에 (climb - slip)만큼 올라간다. 하지만 달팽이가 목표 지점에 도착한 날에는 밤이 되기 전에 도착하므로 
	미끄러지지 않기 때문에 총 (stick_height - slip)만큼 올라가는 것과 같다. 
	
	따라서 (stick_height - slip)을 (climb - slip)으로 나누어주면 된다.
	단, 정확히 나누어 떨어지지 않을 시엔 하루를 더해준다.
	*/

	int day_count = (stick_height - slip) / (climb - slip);
	if ((stick_height - slip) % (climb - slip) != 0)
		day_count++;
	
	cout << day_count << endl; // 결과 출력
	return 0;
}