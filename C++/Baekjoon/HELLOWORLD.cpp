#include <iostream>
using namespace std;

int main()
{
	int test_case;
	cin >> test_case;
	string* name = new string[test_case];

	for (int i = 0; i < test_case; i++)
	{
		cin >> name[i];
	}
	cout << '\n';

	for (int i = 0; i < test_case; i++)
	{
		cout << "Hello, " + name[i] + '!';
		cout << endl;
	}
	return 0;
}