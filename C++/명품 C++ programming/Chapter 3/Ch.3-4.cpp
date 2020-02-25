#include <iostream>
#include <iomanip>
using namespace std;

class CoffeeMachine
{
private:
	int coffee;
	int water;
	int sugar;

public:
	CoffeeMachine(int coffee, int water, int sugar);
	void drink_espresso();
	void drink_americano();
	void drink_sugar_coffee();
	void show();
	void fill();
};

CoffeeMachine::CoffeeMachine(int coffee, int water, int sugar)
{
	this->coffee = coffee;
	this->water = water;
	this->sugar = sugar;
}

void CoffeeMachine::drink_espresso()
{
	coffee--;
	water--;
}

void CoffeeMachine::drink_americano()
{
	coffee--;
	water -= 2;
}

void CoffeeMachine::drink_sugar_coffee()
{
	coffee--;
	water -= 2;
	sugar--;
}

void CoffeeMachine::show()
{
	cout.setf(ios::left);
	cout << "커피 머신 상태, 커피:" << setw(10) << coffee << " 물:" << setw(10) << water
		<< " 설탕:" << setw(10) << sugar << endl;
}

void CoffeeMachine::fill()
{
	coffee = water = sugar = 10;
}

int main()
{
	CoffeeMachine java(5, 10, 3);
	java.drink_espresso();
	java.show();
	java.drink_americano();
	java.show();
	java.drink_sugar_coffee();
	java.show();
	java.fill();
	java.show();

	return 0;
}