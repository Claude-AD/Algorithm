#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cout << "���ڿ� �Է�>>";
	cin >> str;

	for (int i = 0; i < str.size(); i++)
	{
		cout << str.substr(0, i + 1) << endl;
	}
	return 0;
}