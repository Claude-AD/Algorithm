#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	cout << "5 ���� �̸��� ';'���� �����Ͽ� �Է��ϼ���\n>>";

	string name_array[5];
	for (int i = 0; i < 5; i++)
	{
		char name[100];
		cin.getline(name, 100, ';');

		cout << i + 1 << " : " << name << endl;
		name_array[i] = name;
	}

	string max_length_name = name_array[0];
	for (int i = 1; i < 5; i++)
	{
		if (name_array[i].size() > max_length_name.size())
		{
			max_length_name = name_array[i];
		}
	}

	cout << "���� �� �̸��� ";
	for (int i = 0; i < 5; i++)
	{
		if (max_length_name.size() == name_array[i].size())
		{
			cout << name_array[i] << ' ';
		}
	}
	cout << endl;
	return 0;
}