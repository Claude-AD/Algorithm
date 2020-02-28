#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "아래에 한 줄을 입력하세요.(exit을 입력하면 종료합니다)" << endl;

	while (true)
	{
		cout << ">>";
		string str;
		getline(cin, str);
		if (str == "exit")
			break;
		else
		{
			for (int i = 0; i < str.size() / 2; i++)
			{
				char temp;
				temp = str[i];
				str[i] = str[str.size() - 1 - i];
				str[str.size() - 1 - i] = temp;
			}
			cout << str << endl;
		}
	}
	return 0;
}