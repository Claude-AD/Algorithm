#include <iostream>
#include <string>
using namespace std;

int main()
{
	while (true)
	{
		cout << "�����ϰ������ yes�� �Է��ϼ���>>";
		string yes;
		getline(cin, yes);

		if (yes == "yes")
		{
			cout << "�����մϴ�...\n";
			break;
		}
		else
			continue;
	}
}