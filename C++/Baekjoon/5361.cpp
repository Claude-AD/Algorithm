#include <iostream>
using namespace std;

int main()
{
	int test_case;
	cin >> test_case;

	for (int i = 0; i < test_case; i++)
	{
		int rifle, eye, ear, arm, leg;
		cin >> rifle >> eye >> ear >> arm >> leg;

		double price = rifle * 350.34 + eye * 230.90 + ear * 190.55
			+ arm * 125.30 + leg * 180.90;

		cout << fixed;
		cout.precision(2);
		cout << "$" << price << endl;
	}
	return 0;
}