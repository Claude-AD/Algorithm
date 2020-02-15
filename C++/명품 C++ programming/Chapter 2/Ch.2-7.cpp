#include <iostream>
#include <string>
using namespace std;

int main()
{
	while (true)
	{
		cout << "종료하고싶으면 yes를 입력하세요>>";
		string yes;
		getline(cin, yes);

		if (yes == "yes")
		{
			cout << "종료합니다...\n";
			break;
		}
		else
			continue;
	}
}