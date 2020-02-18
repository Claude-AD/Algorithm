#include <iostream>
using namespace std;

int main()
{
	int multitap;
	cin >> multitap;

	int sum = 0;
	for (int i = 0; i < multitap; i++)
	{
		int electric;
		cin >> electric;
		sum += electric;
	}
	int computer = sum - (multitap - 1);
	cout << computer << endl;
	return 0;
}