#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cout << "문자열 입력>>";
	getline(cin, str);

	//(1)번 문제
	cout << "\nat() 또는 []를 이용한 경우" << endl;
	
	int count_1 = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == 'a')
			count_1++;
		else
			continue;
	}
	printf("문자 a는 %d개 있습니다.\n", count_1);

	//(2)번 문제
	cout << "\nfind()를 이용한 경우" << endl;

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
	printf("문자 a는 %d개 있습니다.", count_2);
	return 0;
}