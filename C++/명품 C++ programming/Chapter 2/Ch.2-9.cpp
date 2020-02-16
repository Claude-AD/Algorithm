#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	cout << "이름은?";
	getline(cin, name);

	string address;
	cout << "주소는?";
	getline(cin, address);

	string age;
	cout << "나이는?";
	getline(cin, age);

	cout << name + ", " + address + ", " + age + "세" << endl;
	return 0;
}