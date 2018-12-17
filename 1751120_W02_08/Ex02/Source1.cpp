#include "Header.h"
points::points()//default
{
	xcor = 0;
	ycor = 0;
}
void points::operator=(const points&tmp)
{
	xcor = tmp.xcor;
	ycor = tmp.ycor;
}
points::points(int x, int y)
{
	xcor = x;
	ycor = y;
}
line::line(points x, points y)
{
	start = x;
	end = y;
}
line::line(points x)
{
	points tmp(0, 0);
	end = tmp;
	start = x;
}
line::line()
{
	start = points(0, 0);
	end = points(0, 0);
}
line::line(points x, points middle, int k)//=>point end
{
	start = x;
	end = middle * 2 - x;
}
points points::operator*(int num)
{
	xcor *= num;
	ycor *= num;
	return *this;
}
points points::operator-(const points&tmp)
{
	return points(xcor - tmp.xcor, ycor - tmp.ycor);
}
line::line(const line&tmp)
{
	start = tmp.start;
	end = tmp.end;
}
line::~line()
{
	cout << "This is destructor";
}

