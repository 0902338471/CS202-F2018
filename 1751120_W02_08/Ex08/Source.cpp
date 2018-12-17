#include "Header.h"
int main()
{
	Student a;
	a.display();
	Student b1(1751120, "Tung", "Nguyen Trong",10);
	b1.display();
	Student c1(b1);
	c1.display();
	Student d(1751120, "Tung", "Nguyen Trong");
	d.display();
	Student e(1751120, "Tung",1);
	e.display();
	system("pause");
}