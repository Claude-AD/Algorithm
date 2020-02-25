#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random
{
private:
	string select;
public:
	Random(string s) : select(s) { }
	string get_select() { return select; }
	int next();
	int next_in_range(int a, int b);
};

int Random::next()
{
	if (select == "Â¦¼ö")
	{
		while (true)
		{
			int num = rand();
			if (num % 2 == 0)
				return num;
			else
				continue;
		}
	}
	else if (select == "È¦¼ö")
	{
		while (true)
		{
			int num = rand();
			if (num % 2 == 1)
				return num;
			else
				continue;
		}
	}
}

int Random::next_in_range(int a, int b)
{
	if (select == "Â¦¼ö")
	{
		while (true)
		{
			int num = rand() % (b - a + 1) + a;
			if (num % 2 == 0)
				return num;
			else
				continue;
		}
	}
	else if (select == "È¦¼ö")
	{
		while (true)
		{
			int num = rand() % (b - a + 1) + a;
			if (num % 2 == 1)
				return num;
			else
				continue;
		}
	}
}

int main()
{
	srand(time(nullptr));
	
	Random r_even("Â¦¼ö");
	printf("-- 0¿¡¼­ %d±îÁöÀÇ %s ·£´ý Á¤¼ö 10°³ --\n", RAND_MAX, (r_even.get_select()).c_str());
	for (int i = 0; i < 10; i++)
	{
		int n = r_even.next();
		cout << n << ' ';
	}

	Random r_odd("È¦¼ö");
	cout << "\n\n-- 2¿¡¼­ 9±îÁöÀÇ " << r_odd.get_select() << " ·£´ý Á¤¼ö 10°³ --\n";
	for (int i = 0; i < 10; i++)
	{
		int n = r_odd.next_in_range(2, 9);
		cout << n << ' ';
	}
	cout << endl;
	return 0;
}
