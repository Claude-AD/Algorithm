#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "���ڵ��� �Է��϶�(100�� �̸�).\n";

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

	cout << "x�� ������ " << x_count << endl;
	return 0;
}