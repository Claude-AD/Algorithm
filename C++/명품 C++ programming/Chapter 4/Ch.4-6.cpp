#include <iostream>
#include <string>
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