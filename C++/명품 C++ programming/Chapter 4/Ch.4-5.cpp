#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;

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