#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random
{
public:
	int next() { return rand(); }
	int next_in_range(int a, int b) { return rand() % (b - a + 1) + a; }
};

int main()
{
	Random r;
	printf("-- 0���� %d������ ���� ���� 10�� --\n", RAND_MAX);
	srand(time(nullptr));
	for (int i = 0; i < 10; i++)
	{
		int n = r.next();
		cout << n << ' ';
	}

	cout << "\n\n-- 2���� 4������ ���� ���� 10�� --\n";
	for (int i = 0; i < 10; i++)
	{
		int n = r.next_in_range(2, 4);
		cout << n << ' ';
	}
	cout << endl;
	return 0;
}
