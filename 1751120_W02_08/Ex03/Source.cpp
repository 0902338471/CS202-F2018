#include "Header.h"
int main()
{
	points x(1, 1);
	points y(2, 2);
	points z(3, 3);
	triangle a(x, y, z);
	a.display();
	triangle b(a);
	b.display();
	triangle c;
	c.display();
	triangle d(y);
	d.display();
	triangle e(x, y);
	e.display();
	system("pause");
}