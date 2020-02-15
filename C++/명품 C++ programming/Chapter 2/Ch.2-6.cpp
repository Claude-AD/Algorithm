#include <iostream>
using namespace std;

int main()
{
	string password;
	cout << "새 암호를 입력하세요>>";
	cin >> password;

	string check;
	cout << "새 암호를 다시 한 번 입력하세요>>";
	cin >> check;

	if (password == check)
	{
		cout << "같습니다\n";
	}
	else
	{
		cout << "같지 않습니다\n";
	}
	return 0;
}