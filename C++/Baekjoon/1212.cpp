#include <iostream>
#include <string>
using namespace std;

int main()
{
	string octal;
	getline(cin, octal);

	string to_binary[2][8] =	// 이진수 함수로 구현하기에 무리가 있어서 이차원 배열에 2진수를 넣어놓음
	{
		{"","1","10","11","100","101","110","111"},		// 맨 앞이 0으로 시작하지 않도록 따로 저장한다.
		{"000","001","010","011","100","101","110","111"}
	};
	for (int i = 0; i < octal.size(); i++)
	{
		int binary = octal[i] - '0';	// char형 숫자를 -> int형으로 바꿈

		if (binary == 0 && octal.size() == 1)	// 0 하나만 입력했을 때
			cout << 0 << '\n';
 
		else
		{
			if (i == 0)
				cout << to_binary[0][binary];	// 첫번째 숫자
			else
				cout << to_binary[1][binary];	// 그 이후 숫자
		}
	}
	cout << '\n';
	return 0;
}
