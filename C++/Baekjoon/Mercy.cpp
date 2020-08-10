#include <iostream>
using namespace std;

int main()
{
	int num; 
	cin >> num; // 사용자로부터 정수를 입력받음

	for (int i = 0; i < num; i++) // 그 정수만큼 Hello Algospot!을 출력
	{
		cout << "Hello Algospot!\n";
	}
	return 0;
}