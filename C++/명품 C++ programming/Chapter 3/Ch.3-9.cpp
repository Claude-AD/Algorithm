#include <iostream>
using namespace std;

class Oval
{
private:
	int width;
	int height;

public:
	Oval() : Oval(1, 1) { }
	Oval(int w, int h) : width(w), height(h) { }
	~Oval() { printf("Oval ¼Ò¸ê : width = %d, height = %d\n", width, height); }
	int get_width() { return width; }
	int get_height() { return height; }
	void set(int w, int h) { width = w; height = h; }
	void show() { printf("width = %d, height = %d\n", width, height); }
};

int main()
{
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.get_width() << ", " << b.get_height() << endl;

	return 0;
}