#include <iostream>
using namespace std;

int main()
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int length[4] = { x, y, w - x, h - y };
	int min = length[0];
	for (int i = 1; i < 4; i++)
	{
		if (length[i] <= min)
			min = length[i];
	}

	cout << min << endl;
	return 0;
}