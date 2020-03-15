#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

class Circle
{
private:
	int radius; // ���� ������ ��
	string name; // ���� �̸�

public:
	void set_circle(string name, int radius)
	{
		this->radius = radius;
		this->name = name;
	}
	double get_area() { return M_PI * pow(radius, 2); }
	string get_name() { return name; }
};

class CircleManager
{
private:
	Circle* p; // Circle �迭�� ���� ������
	int size; // �迭�� ũ��

public:
	CircleManager(int size) // size ũ���� �迭�� ���� ����, ����ڷκ��� �Է� �Ϸ�
	{
		this->size = size;
		p = new Circle[this->size];
	}
	void search_by_name(); // ����ڷκ��� ���� �̸��� �Է¹޾� ���� ���
	void search_by_area(); // ����ڷκ��� ������ �Է¹޾� �������� ū ���� �̸� 
	Circle* get_p() { return p; } // CircleManager�� �迭�� �����ϱ� ���� �Լ�
};

void CircleManager::search_by_name()
{
	string circle_name;
	cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
	cin >> circle_name;

	for (int i = 0; i < size; i++)
	{
		if (circle_name == p[i].get_name())
		{
			cout << circle_name << "�� ������ " << p[i].get_area() << endl;
		}
		else
			continue;
	}
}

void CircleManager::search_by_area()
{
	int min_area;
	cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
	cin >> min_area;

	cout << min_area << "���� ū ���� �˻��մϴ�." << endl;

	for (int i = 0; i < size; i++)
	{
		if (p[i].get_area() > min_area)
		{
			cout << p[i].get_name() << "�� ������ " << p[i].get_area() << ",";
		}
		else
			continue;
	}
}

int main()
{
	int num_of_circle;
	cout << "���� ���� >> ";
	cin >> num_of_circle;

	CircleManager arr(num_of_circle);
	for (int i = 0; i < num_of_circle; i++)
	{
		string name;
		int rad;
		printf("�� %d�� �̸��� ������ >> ", i + 1);
		cin >> name >> rad;
		arr.get_p()[i].set_circle(name, rad);
	}

	arr.search_by_name();
	arr.search_by_area();
	return 0;
}