#include <iostream>
#include <string>
using namespace std;

int main()
{
	string octal;
	getline(cin, octal);

	string to_binary[2][8] =	// ������ �Լ��� �����ϱ⿡ ������ �־ ������ �迭�� 2������ �־����
	{
		{"","1","10","11","100","101","110","111"},		// �� ���� 0���� �������� �ʵ��� ���� �����Ѵ�.
		{"000","001","010","011","100","101","110","111"}
	};
	for (int i = 0; i < octal.size(); i++)
	{
		int binary = octal[i] - '0';	// char�� ���ڸ� -> int������ �ٲ�

		if (binary == 0 && octal.size() == 1)	// 0 �ϳ��� �Է����� ��
			cout << 0 << '\n';
 
		else
		{
			if (i == 0)
				cout << to_binary[0][binary];	// ù��° ����
			else
				cout << to_binary[1][binary];	// �� ���� ����
		}
	}
	cout << '\n';
	return 0;
}
