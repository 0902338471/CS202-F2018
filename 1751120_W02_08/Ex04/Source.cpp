#include "Header.h"
int main()
{
	points x(1, 2);
	points y(3, 4);
	Rectangle a;
	a.display();
	Rectangle b(x, y);
	b.display();
	Rectangle c(b);
	c.display();
	Rectangle d(x);
	d.display();
	Rectangle e(x, 1);
	e.display();
	system("pause");
}