#include <iostream>
using namespace std;

class Container	// 통 하나를 나타내는 클래스
{
private:
	int size; // 현재 저장량, 최대 저장량은 10

public:
	Container() : size(10) { }
	void fill() { size = 10; } // 최대량(10)으로 채우기
	void consume() { size--; } // 1 만큼 소모하기
	int get_size() { return size; } // 현재 크기 리턴
};

class CoffeeVendingMachine // 커피자판기를 표현하는 클래스
{
private:
	Container tong[3]; // tong[0]은 커피, tong[1]은 물, tong[2]는 설탕통을 나타냄
	void fill(); // 3개의 통을 모두 10으로 채움
	void select_espresso(); // 에스프레소를 선택한 경우, 커피 1, 물 1 소모
	void select_americano(); // 아메리카노를 선택한 경우, 커피 1, 물 2 소모
	void select_sugar_coffee(); // 설탕커피를 선택한 경우, 커피 1, 물 2, 설탕 1 소모
	void show(); // 현재 커피, 물, 설탕의 잔량 출력
	
public:
	void run(); // 커피 자판기 작동
};

void CoffeeVendingMachine::fill()
{
	for (int i = 0; i < 3; i++)
	{
		tong[i].fill();
	}
	show();
}

void CoffeeVendingMachine::select_espresso()
{
	if (tong[0].get_size() < 1 || tong[1].get_size() < 1)
	{
		cout << "원료가 부족합니다." << endl;
	}

	else 
	{
		tong[0].consume();
		tong[1].consume();
		cout << "에스프레소 드세요" << endl;
	}
}

void CoffeeVendingMachine::select_americano()
{
	if (tong[0].get_size() < 1 || tong[1].get_size() < 2)
	{
		cout << "원료가 부족합니다." << endl;
	}

	else
	{
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		cout << "아메리카노 드세요" << endl;
	}
}

void CoffeeVendingMachine::select_sugar_coffee()
{
	if (tong[0].get_size() < 1 || tong[1].get_size() < 2 || tong[2].get_size() < 1)
	{
		cout << "원료가 부족합니다." << endl;
	}

	else
	{
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		tong[2].consume();
		cout << "설탕커피 드세요" << endl;
	}
}

void CoffeeVendingMachine::show()
{
	cout << "커피 " << tong[0].get_size() << ", "
		<< "물 " << tong[1].get_size() << ", "
		<< "설탕 " << tong[2].get_size() << endl;
}

void CoffeeVendingMachine::run()
{
	cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>>";
	int select;
	cin >> select;

	switch (select)
	{
	case 1:
		select_espresso();
		break;

	case 2:
		select_americano();
		break;

	case 3:
		select_sugar_coffee();
		break;

	case 4:
		show();
		break;

	case 5:
		fill();
		break;
	}
}

int main()
{
	CoffeeVendingMachine cafe;
	cout << "***** 커피자판기를 작동합니다. *****" << endl;
	while (true)
	{
		cafe.run();
	}
	return 0;
}