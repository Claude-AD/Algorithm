#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
	string name;
	string tel;

public:
	string get_name() { return name; }
	string get_tel() { return tel; }
	void set(string name, string tel) { this->name = name; this->tel = tel; }
};

int main()
{
	cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���\n";
	Person people[3];
	for (int i = 0; i < 3; i++)
	{
		string n, t;
		printf("��� %d>> ", i + 1);
		cin >> n >> t;
		people[i].set(n, t);
	}
	
	cout << "��� ����� �̸��� ";
	for (int i = 0; i < 3; i++)
	{
		cout << people[i].get_name() << ' ';
	}

	string find_name;
	cout << "\n��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ���>>";
	cin >> find_name;

	for (int i = 0; i < 3; i++)
	{
		if (find_name == people[i].get_name())
			cout << "��ȭ ��ȣ�� " << people[i].get_tel() << endl;
		else
			continue;
	}
	return 0;
}