#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cout << "���ڿ� �Է�>>";
	getline(cin, str);

	//(1)�� ����
	cout << "\nat() �Ǵ� []�� �̿��� ���" << endl;
	
	int count_1 = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == 'a')
			count_1++;
		else
			continue;
	}
	printf("���� a�� %d�� �ֽ��ϴ�.\n", count_1);

	//(2)�� ����
	cout << "\nfind()�� �̿��� ���" << endl;

	int count_2 = 0;
	int start_index = 0;
	while (true)
	{
		int f_index = str.find('a', start_index);
		if (f_index == string::npos)
			break;
		else
		{
			count_2++;
			start_index = f_index + 1;
		}
	}
	printf("���� a�� %d�� �ֽ��ϴ�.", count_2);
	return 0;
}