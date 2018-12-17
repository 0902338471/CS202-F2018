#include "Header.h"
int main()
{
	Date a;
	a.display();
	Date b(11, 11, 2017);
	b.display();
	Date c(14, 10);
	c.display();
	Date d(c);
	d.display();
	Date f(24);
	f.display();
	system("pause");
}