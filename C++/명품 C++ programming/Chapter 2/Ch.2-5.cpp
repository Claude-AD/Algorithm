#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "문자들을 입력하라(100개 미만).\n";

	string s;
	getline(cin, s);

	int x_count = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'x')
		{
			x_count++;
		}
		else
			continue;
	}

	cout << "x의 개수는 " << x_count << endl;
	return 0;
}