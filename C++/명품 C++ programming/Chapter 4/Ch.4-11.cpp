#include <iostream>
using namespace std;

class Container	// �� �ϳ��� ��Ÿ���� Ŭ����
{
private:
	int size; // ���� ���差, �ִ� ���差�� 10

public:
	Container() : size(10) { }
	void fill() { size = 10; } // �ִ뷮(10)���� ä���
	void consume() { size--; } // 1 ��ŭ �Ҹ��ϱ�
	int get_size() { return size; } // ���� ũ�� ����
};

class CoffeeVendingMachine // Ŀ�����Ǳ⸦ ǥ���ϴ� Ŭ����
{
private:
	Container tong[3]; // tong[0]�� Ŀ��, tong[1]�� ��, tong[2]�� �������� ��Ÿ��
	void fill(); // 3���� ���� ��� 10���� ä��
	void select_espresso(); // ���������Ҹ� ������ ���, Ŀ�� 1, �� 1 �Ҹ�
	void select_americano(); // �Ƹ޸�ī�븦 ������ ���, Ŀ�� 1, �� 2 �Ҹ�
	void select_sugar_coffee(); // ����Ŀ�Ǹ� ������ ���, Ŀ�� 1, �� 2, ���� 1 �Ҹ�
	void show(); // ���� Ŀ��, ��, ������ �ܷ� ���
	
public:
	void run(); // Ŀ�� ���Ǳ� �۵�
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
		cout << "���ᰡ �����մϴ�." << endl;
	}

	else 
	{
		tong[0].consume();
		tong[1].consume();
		cout << "���������� �弼��" << endl;
	}
}

void CoffeeVendingMachine::select_americano()
{
	if (tong[0].get_size() < 1 || tong[1].get_size() < 2)
	{
		cout << "���ᰡ �����մϴ�." << endl;
	}

	else
	{
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		cout << "�Ƹ޸�ī�� �弼��" << endl;
	}
}

void CoffeeVendingMachine::select_sugar_coffee()
{
	if (tong[0].get_size() < 1 || tong[1].get_size() < 2 || tong[2].get_size() < 1)
	{
		cout << "���ᰡ �����մϴ�." << endl;
	}

	else
	{
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		tong[2].consume();
		cout << "����Ŀ�� �弼��" << endl;
	}
}

void CoffeeVendingMachine::show()
{
	cout << "Ŀ�� " << tong[0].get_size() << ", "
		<< "�� " << tong[1].get_size() << ", "
		<< "���� " << tong[2].get_size() << endl;
}

void CoffeeVendingMachine::run()
{
	cout << "�޴��� �����ּ���(1:����������, 2:�Ƹ޸�ī��, 3:����Ŀ��, 4:�ܷ�����, 5:ä���)>>";
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
	cout << "***** Ŀ�����Ǳ⸦ �۵��մϴ�. *****" << endl;
	while (true)
	{
		cafe.run();
	}
	return 0;
}