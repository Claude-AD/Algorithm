#include <iostream>
using namespace std;

int main()
{
	int k, n = 0;
	int sum = 0;
	cout << "�� ���� �Է��ϼ���>>";
	cin >> n;

	for (k = 1; k <= n; k++)
	{
		sum += k;
	}
	printf("1���� %d������ ���� %d �Դϴ�.\n", n, sum);
	return 0;
}
