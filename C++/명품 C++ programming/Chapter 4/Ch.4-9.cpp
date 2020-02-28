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
	cout << "이름과 전화 번호를 입력해 주세요\n";
	Person people[3];
	for (int i = 0; i < 3; i++)
	{
		string n, t;
		printf("사람 %d>> ", i + 1);
		cin >> n >> t;
		people[i].set(n, t);
	}
	
	cout << "모든 사람의 이름은 ";
	for (int i = 0; i < 3; i++)
	{
		cout << people[i].get_name() << ' ';
	}

	string find_name;
	cout << "\n전화번호 검색합니다. 이름을 입력하세요>>";
	cin >> find_name;

	for (int i = 0; i < 3; i++)
	{
		if (find_name == people[i].get_name())
			cout << "전화 번호는 " << people[i].get_tel() << endl;
		else
			continue;
	}
	return 0;
}