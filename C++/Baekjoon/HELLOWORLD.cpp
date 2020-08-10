#include <iostream>
using namespace std;

int main()
{
	int test_case; // 인사할 사람의 명수
	cin >> test_case; // 사용자로부터 입력받음
	string* name = new string[test_case]; // 인사할 사람의 명수만큼 string배열 동적할당

	for (int i = 0; i < test_case; i++) // 사용자로부터 인사할 사람의 이름을 차례대로 입력받음
	{
		cin >> name[i];
	}
	cout << '\n';

	for (int i = 0; i < test_case; i++) // 모든 사용자에 대하여 Hello, (사용자 이름)!을 출력 
	{
		cout << "Hello, " + name[i] + '!';
		cout << endl;
	}

	delete[] name; // 동적할당 해제
	return 0;
}