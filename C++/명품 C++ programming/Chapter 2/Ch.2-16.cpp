#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�.\n�ؽ�Ʈ�� ���� ;�Դϴ�. 1000������ �����մϴ�.\n";
	string buf;
	getline(cin, buf, ';');

	int alpha = 0;
	int alpha_counter[26] = { 0 };			// �ʱ�ȭ �ϴ� ���� ���̱�
	for (int i = 0; i < buf.size(); i++)
	{
		if (isupper(buf[i]))
		{
			buf[i] = tolower(buf[i]);
		}
		if (isalpha(buf[i]))
		{
			alpha++;
			
			int ascii = buf[i] - 97;
			alpha_counter[ascii]++;
		}
	}
	cout << "�� ���ĺ� �� " << alpha << "\n\n";
	for (int i = 0; i < 26; i++)
	{
		char alphabet = (char)(i + 97);
		printf("%c (%d) : ", alphabet, alpha_counter[i]);
		for (int j = 0; j < alpha_counter[i]; j++)
		{
			cout << '*';
		}
		cout << endl;
	}
}