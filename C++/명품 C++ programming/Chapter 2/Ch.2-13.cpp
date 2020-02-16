#include <iostream>
using namespace std;

int main()
{
	cout << "***** 승리장에 오신 것을 환영합니다. *****" << endl;
	
	while (true)
	{
		int order;
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>> ";
		cin >> order;

		string menu;
		if (order == 1)
			menu = "짬뽕";
		else if (order == 2)
			menu = "짜장";
		else if (order == 3)
			menu = "군만두";
		else if (order == 4)
		{
			cout << "오늘 영업은 끝났습니다." << endl;
			break;
		}
		else
		{
			cout << "다시 주문하세요!!\n";
			continue;
		}

		int people = 0;
		cout << "몇인분?";
		cin >> people;

		cout << menu << " " << people << "인분 나왔습니다" << endl;
	}
	return 0;
}