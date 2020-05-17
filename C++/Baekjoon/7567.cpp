#include <iostream>
#include <string>
using namespace std;

int main()
{
	string plates;
	int plates_height = 0;

	do {
		cin >> plates;
	} while (getc(stdin) == ' ');

	for (int i = 0; i < plates.length(); i++)
	{
		if (i == 0)
			plates_height += 10;

		else
		{

			if (plates[i - 1] == plates[i])
				plates_height += 5;
			else
				plates_height += 10;
		}
	}
	cout << plates_height << endl;
	return 0;
}
