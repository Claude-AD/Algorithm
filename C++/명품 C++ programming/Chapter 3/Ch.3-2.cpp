#include <iostream>
#include <string>
using namespace std;

class Date
{
	int year;
	int month;
	int day;

public:
	Date(int year, int month, int day);
	Date(string day);
	void show() { printf("%d³â%d¿ù%dÀÏ", year, month, day); }
	int get_year() { return year; }
	int get_month() { return month; }
	int get_day() { return day; }
};

Date::Date(int year, int month, int day)
{
	this->year = year;
	this->month = month;
	this->day = day;
}

Date::Date(string day)
{
	string str_arr[1000];
	int str_cnt = 0;

	char* str_buff = new char[1000];
	strcpy(str_buff, day.c_str());

	char* tok = strtok(str_buff, "/");
	
	while (tok != nullptr)
	{
		str_arr[str_cnt++] = string(tok);
		tok = strtok(nullptr, "/");
	} 

	this->year = stoi(str_arr[0]);
	this->month = stoi(str_arr[1]);
	this->day = stoi(str_arr[2]);
}

int main()
{
	Date birth(2014, 3, 20);
	Date independence_day("1945/8/15");
	independence_day.show();
	cout << '\n';
	printf("%d,%d,%d\n", birth.get_year(), birth.get_month(), birth.get_day());

	return 0;
}