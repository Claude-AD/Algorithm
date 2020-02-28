#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;

class Circle
{
private:
	int radius;

public:
	void set_radius(int radius) { this->radius = radius; }
	double get_area() { return M_PI * pow(radius, 2); }
};

int main()
{
	cout << "���� ���� >> ";
	int num;
	cin >> num;

	Circle* arr = new Circle[num];
	for (int i = 0; i < num; i++)
	{
		printf("�� %d�� ������ >> ", i + 1);
		int r;
		cin >> r;
		arr[i].set_radius(r);
	}

	int count = 0;
	for (int i = 0; i < num; i++)
	{
		if (arr[i].get_area() > 100)
			count++;
	}

	printf("������ 100���� ū ���� %d�� �Դϴ�\n", count);
	return 0;
}