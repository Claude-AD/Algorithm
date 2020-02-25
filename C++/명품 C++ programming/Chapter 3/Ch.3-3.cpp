#include <iostream>
using namespace std;

class Account
{
private:
	string name;
	int id;
	int balance;

public:
	Account(string name, int id, int balance)
	{
		this->name = name;
		this->id = id;
		this->balance = balance;
	}
	string get_owner() { return name; }
	void deposit(int money) { balance += money; }
	int withdraw(int money)
	{
		balance -= money;
		return money;
	}
	int inquiry() { return balance; }
};

int main()
{
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.get_owner() << "의 잔액은 " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << "출금한 금액은 " << money << endl;
	cout << a.get_owner() << "의 잔액은 " << a.inquiry() << endl;

	return 0;
}