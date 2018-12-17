#include "Header.h"
int main()
{
	/*line(points x, points y);
	line(points x);//end point is at the origin
	line();
	line(points x, points middle);//=>point end
	line(const line&tmp);
	~line();*/
	points x(1, 2);
	points y(3, 4);
	line a(x,y);
	a.display();
	line b(x);
	b.display();
	line c;
	c.display();
	line d(x, y, 1);
	d.display();
	line f(d);
	f.display();
	system("pause");
}