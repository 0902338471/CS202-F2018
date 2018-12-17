#include "Header.h"
points::points(int x, int y) {
	xcor = x;
	ycor = y;
}
points::points()
{
	xcor = 0;
	ycor = 0;
}
void points::operator=(const points&tmp)
{
	xcor = tmp.xcor;
	ycor = tmp.ycor;
}
triangle::triangle()//defaultvalue
{
	A = points(0, 0);
	B = points(0, 0);
	C = points(0, 0);
}
triangle::triangle(points x, points y, points z)
{
	A = x;
	B = y;
	C = z;
}
triangle::triangle(const triangle&tmp)
{
	A = tmp.A;
	B = tmp.B;
	C = tmp.C;
}
triangle::triangle(points x)
{
	A = x;
	B = x;
	C = x;
}
triangle::triangle(points x, points y)
{
	A = x;
	B = x;
	C = y;
}
triangle::~triangle()
{
	cout << "Destructor";
}