#include <iostream>
#include <string>
using namespace std;

int main()
{
	string romio, juliet;

	cout << "가위 바위 보 게임을 합니다. 가위, 바위, 보 중에서 입력하세요.\n";
	cout << "로미오>>";
	cin >> romio;
	cout << "줄리엣>>";
	cin >> juliet;

	if ((romio == "가위" && juliet == "보") || (romio == "바위" && juliet == "가위") || (romio == "보" && juliet == "바위"))
	{
		cout << "로미오가 이겼습니다." << endl;
	}
	else if ((juliet == "가위" && romio == "보") || (juliet == "바위" && romio == "가위") || (juliet == "보" && romio == "바위"))
	{
		cout << "줄리엣이 이겼습니다." << endl;
	}
	else
	{
		cout << "비겼습니다." << endl;
	}
	return 0;
}