#include <iostream>
using namespace std;

int main()
{
	int test_case;
	cin >> test_case;

	for (int i = 0; i < test_case; i++)
	{
		int sum = 0;
		int num;
		cin >> num;

		for (int i = 0; i < num; i++)
		{
			int natural_number;
			cin >> natural_number;
			sum += natural_number;
		}
		cout << sum << endl;
	}
	return 0;
}