#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

class Circle
{
private:
	int radius; // 원의 반지름 값
	string name; // 원의 이름

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
	Circle* p; // Circle 배열에 대한 포인터
	int size; // 배열의 크기

public:
	CircleManager(int size) // size 크기의 배열을 동적 생성, 사용자로부터 입력 완료
	{
		this->size = size;
		p = new Circle[this->size];
	}
	void search_by_name(); // 사용자로부터 원의 이름을 입력받아 면적 출력
	void search_by_area(); // 사용자로부터 면적을 입력받아 면적보다 큰 원의 이름 
	Circle* get_p() { return p; } // CircleManager의 배열에 접근하기 위한 함수
};

void CircleManager::search_by_name()
{
	string circle_name;
	cout << "검색하고자 하는 원의 이름 >> ";
	cin >> circle_name;

	for (int i = 0; i < size; i++)
	{
		if (circle_name == p[i].get_name())
		{
			cout << circle_name << "의 면적은 " << p[i].get_area() << endl;
		}
		else
			continue;
	}
}

void CircleManager::search_by_area()
{
	int min_area;
	cout << "최소 면적을 정수로 입력하세요 >> ";
	cin >> min_area;

	cout << min_area << "보다 큰 원을 검색합니다." << endl;

	for (int i = 0; i < size; i++)
	{
		if (p[i].get_area() > min_area)
		{
			cout << p[i].get_name() << "의 면적은 " << p[i].get_area() << ",";
		}
		else
			continue;
	}
}

int main()
{
	int num_of_circle;
	cout << "원의 개수 >> ";
	cin >> num_of_circle;

	CircleManager arr(num_of_circle);
	for (int i = 0; i < num_of_circle; i++)
	{
		string name;
		int rad;
		printf("원 %d의 이름과 반지름 >> ", i + 1);
		cin >> name >> rad;
		arr.get_p()[i].set_circle(name, rad);
	}

	arr.search_by_name();
	arr.search_by_area();
	return 0;
}