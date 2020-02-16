#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cout << "문자열 입력>>";
	cin >> str;

	for (int i = 0; i < str.size(); i++)
	{
		cout << str.substr(0, i + 1) << endl;
	}
	return 0;
}