#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	cout << "�̸���?";
	getline(cin, name);

	string address;
	cout << "�ּҴ�?";
	getline(cin, address);

	string age;
	cout << "���̴�?";
	getline(cin, age);

	cout << name + ", " + address + ", " + age + "��" << endl;
	return 0;
}