#include <iostream>
using namespace std;

class Color
{
private:
	int red, green, blue;

public:
	Color() { red = green = blue = 0; }
	Color(int r, int g, int b) : red(r), green(g), blue(b) { }
	void set_color(int r, int g, int b) { red = r; green = g; blue = b; }
	void show() { printf("%d %d %d\n", red, green, blue); }
};

int main()
{
	Color screen_color(255, 0, 0);
	Color* p;
	p = &screen_color;
	p->show();
	Color colors[3];
	p = colors;

	p->set_color(255, 0, 0);
	(p + 1)->set_color(0, 255, 0);
	(p + 2)->set_color(0, 0, 255);

	for (int i = 0; i < 3; i++)
	{
		(p + i)->show();
	}
	return 0;
}