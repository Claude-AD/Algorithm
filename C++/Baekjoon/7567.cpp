#include <iostream>
#include <string>
using namespace std;

int main()
{
	string plates; // 사용자로부터 입력받을 그릇 문자열
	int plates_height = 0; // 그릇의 최종 높이

	cin >> plates; // 사용자로부터 그릇 문자열 입력받음

	for (int i = 0; i < plates.length(); i++) // 총 그릇의 개수만큼 반복
	{
		if (i == 0)
			plates_height += 10; // 처음 바닥에 있는 그릇의 높이는 10cm

		else
		{

			if (plates[i - 1] == plates[i]) // 같은 방향으로 포개면 높이 5cm 증가
				plates_height += 5;
			else // 반대방향으로 쌓이면 높이 10cm 증가
				plates_height += 10;
		}
	}
	cout << plates_height << endl; // 그릇의 최종 높이 출력
	return 0;
}
