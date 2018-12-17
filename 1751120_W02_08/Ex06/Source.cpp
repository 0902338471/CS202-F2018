#include "Header.h"
int main()
{
	Time a;
	a.display();
	Time b(1, 1, 1);
	b.display();
	Time c(b);
	c.display();
	Time d(1);
	d.display();
	Time f(3, 3);
	f.display();
	system("pause");
}