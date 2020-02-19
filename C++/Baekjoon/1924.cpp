#include <iostream>
using namespace std;

int main()
{
	int dow[12][31];			
	// 요일을 저장할 이중배열 생성

	int count = 0;				
	// 요일을 숫자로 표현
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 31; j++)
		{
			if ((i == 1 && j == 28) || (i == 1 && j == 29) ||
				(i == 1 && j == 30))
			{
				continue;
				// 2월은 28일까지 있음
			}
			else if ((i == 3 && j == 30) || (i == 5 && j == 30) ||
				(i == 8 && j == 30) || (i == 10 && j == 30))
			{
				continue;
				// 4월, 6월, 9월, 11월은 30일까지 있음
			}
			else
			{
				dow[i][j] = count;
				count++;
				// 나머지 날짜에는 요일을 저장
			}
		}
	}
	int month, day;
	cin >> month >> day;		
	// 달과 날짜를 입력

	int result = dow[month - 1][day - 1];
	// 배열은 (0,0) 부터 시작하므로 입력한 달과 날짜에서 1씩 빼준다.
	int remainder = result % 7;
	// 7로 나눴을 때 나머지로 요일을 정해준다.
	if (remainder == 0)
		cout << "MON\n";
	else if (remainder == 1)
		cout << "TUE\n";
	else if (remainder == 2)
		cout << "WED\n";
	else if (remainder == 3)
		cout << "THU\n";
	else if (remainder == 4)
		cout << "FRI\n";
	else if (remainder == 5)
		cout << "SAT\n";
	else if (remainder == 6)
		cout << "SUN\n";

	return 0;
}