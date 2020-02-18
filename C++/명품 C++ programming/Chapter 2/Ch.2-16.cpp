#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n텍스트의 끝은 ;입니다. 1000개까지 가능합니다.\n";
	string buf;
	getline(cin, buf, ';');

	int alpha = 0;
	int alpha_counter[26] = { 0 };			// 초기화 하는 버릇 들이기
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
	cout << "총 알파벳 수 " << alpha << "\n\n";
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