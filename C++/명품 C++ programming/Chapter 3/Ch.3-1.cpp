#include <iostream>
using namespace std;

class Tower
{
private:
	int height;
	
public:
	Tower() : Tower(1) { }
	Tower(int h) : height(h) { }

	int get_height() { return height; }
};

int main()
{
	Tower my_tower;
	Tower seoul_tower(100);
	printf("���̴� %d����\n", my_tower.get_height());
	printf("���̴� %d����\n", seoul_tower.get_height());
	return 0;
}