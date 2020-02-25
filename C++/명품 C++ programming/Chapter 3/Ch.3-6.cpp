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
	printf("-- 0에서 %d까지의 랜덤 정수 10개 --\n", RAND_MAX);
	srand(time(nullptr));
	for (int i = 0; i < 10; i++)
	{
		int n = r.next();
		if (n % 2 == 0)
		{
			cout << n << ' ';
		}
		else
		{
			i--;
		}
	}

	cout << "\n\n-- 2에서 10까지의 랜덤 정수 10개 --\n";
	for (int i = 0; i < 10; i++)
	{
		int n = r.next_in_range(2, 10);
		if (n % 2 == 0)
		{
			cout << n << ' ';
		}
		else
		{
			i--;
		}	
	}
	cout << endl;
	return 0;
}
