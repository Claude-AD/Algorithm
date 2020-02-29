#include <iostream>
#include <iomanip>
using namespace std;

class Person
{
private:
	string name;

public:
	Person() { name = "-"; }
	Person(string name) { this->name = name; }
	void set_name(string name) { this->name = name; }
	string get_name() { return name; }
};

class Family
{
private:
	Person* p;
	string family_name;
	int size;

public:
	Family(string family_name, int size);
	void set_name(int index, string name);
	void show();
};

Family::Family(string family_name, int size)
{
	this->family_name = family_name;
	this->size = size;
	p = new Person[size];
}

void Family::set_name(int index, string name)
{
	(p + index)->set_name(name);
}

void Family::show()
{
	cout << family_name << "가족은 다음과 같이 " << size << "명 입니다." << endl;
	for (int i = 0; i < size; i++)
	{
		cout << (p + i)->get_name() << '\t';
	}
	cout << endl;
}

int main()
{
	Family* simpson = new Family("Simpson", 3);
	simpson->set_name(0, "Mr. Simpson");
	simpson->set_name(1, "Mrs. Simpson");
	simpson->set_name(2, "Bart Simpson");
	simpson->show();
	
	delete simpson;
	return 0;
}