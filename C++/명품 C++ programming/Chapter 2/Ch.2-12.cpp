#include <iostream>
using namespace std;

int sum(int, int);

int main()
{
	int n = 0;
	cout << "끝 수를 입력하세요>>";
	cin >> n;
	printf("1에서 %d까지의 합은 %d 입니다.\n", n, sum(1, n));
	return 0;
}

int sum(int a, int b)
{
	int k, res = 0;
	for (k = a; k <= b; k++)
	{
		res += k;
	}
	return res;
}