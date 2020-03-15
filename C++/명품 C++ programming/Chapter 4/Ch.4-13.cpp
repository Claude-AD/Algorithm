#include <iostream>
using namespace std;

class Histogram
{
private:
	string str;
	int alpha_cnt = 0;

public:
	Histogram(string str)
	{
		this->str = str;
	}
	void put(string app)
	{
		str.append(app);
	}
	void putc(char c)
	{
		str.push_back(c);
	}
	void count_alpha();
	void upper_to_lower();
	void print();
};

void Histogram::count_alpha()
{
	for (int i = 0; i < str.size(); i++)
	{
		if (isalpha(str[i]))
		{
			alpha_cnt++;
		}
		else
			continue;
	}
}

void Histogram::upper_to_lower()
{
	for (int i = 0; i < str.size(); i++)
	{
		if (isupper(str[i]))
		{
			str[i] = tolower(str[i]);
		}
		else
			continue;
	}
}

void Histogram::print()
{
	cout << str << "\n\n";
	upper_to_lower();
	count_alpha();
	cout << "ÃÑ ¾ËÆÄºª ¼ö " << alpha_cnt << "\n\n";

	for (int i = 0; i < 26; i++)
	{
		int count = 0;
		char alpha = 97 + i;

		for (int j = 0; j < str.size(); j++)
		{
			if (str[j] == alpha)
				count++;
		}
		printf("%c (%d)  : ", alpha, count);
		for (int k = 0; k < count; k++)
			cout << "*";
		cout << endl;
	}

}

int main()
{
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();

	return 0;
}