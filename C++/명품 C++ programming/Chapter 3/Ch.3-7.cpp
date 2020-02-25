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
	if (select == "¦��")
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
	else if (select == "Ȧ��")
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
	if (select == "¦��")
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
	else if (select == "Ȧ��")
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
	
	Random r_even("¦��");
	printf("-- 0���� %d������ %s ���� ���� 10�� --\n", RAND_MAX, (r_even.get_select()).c_str());
	for (int i = 0; i < 10; i++)
	{
		int n = r_even.next();
		cout << n << ' ';
	}

	Random r_odd("Ȧ��");
	cout << "\n\n-- 2���� 9������ " << r_odd.get_select() << " ���� ���� 10�� --\n";
	for (int i = 0; i < 10; i++)
	{
		int n = r_odd.next_in_range(2, 9);
		cout << n << ' ';
	}
	cout << endl;
	return 0;
}
