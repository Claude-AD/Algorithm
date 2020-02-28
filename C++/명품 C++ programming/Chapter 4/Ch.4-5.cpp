#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
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
			R:
			srand(time(nullptr));
			int pos = rand() % str.size();
			char alpha = rand() % 26 + 97;

			if (str[pos] == ' ')
				goto R;
			else
				str[pos] = alpha;

			cout << str << endl;
		}
	}
	return 0;
}