#include <iostream>
using namespace std;

int main()
{
	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****" << endl;
	
	while (true)
	{
		int order;
		cout << "«��:1, ¥��:2, ������:3, ����:4>> ";
		cin >> order;

		string menu;
		if (order == 1)
			menu = "«��";
		else if (order == 2)
			menu = "¥��";
		else if (order == 3)
			menu = "������";
		else if (order == 4)
		{
			cout << "���� ������ �������ϴ�." << endl;
			break;
		}
		else
		{
			cout << "�ٽ� �ֹ��ϼ���!!\n";
			continue;
		}

		int people = 0;
		cout << "���κ�?";
		cin >> people;

		cout << menu << " " << people << "�κ� ���Խ��ϴ�" << endl;
	}
	return 0;
}