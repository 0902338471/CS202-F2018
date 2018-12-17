#include "Header.h"
void triangle::input(point a, point b, point c)
{
	one.x = a.x;
	one.y = a.y;
	two.x = b.x;
	two.y = b.y;
	three.x = c.x;
	three.y = c.y;
}
void triangle::output()
{
	cout << "Point A:(" << one.x << "," << one.y << ")" << endl;
	cout << "Point B:(" << two.x << "," << two.y << ")" << endl;
	cout << "Point C:(" << three.x << "," << three.y << ")" << endl;
}
int triangle::perimeter()
{
	return (AB()+BC()+AC());
}
int triangle::calculatingdistance(point start, point end)
{
	return(sqrt((start.x - end.x)*(start.x - end.x) + (start.y - end.y)*(start.y - end.y)));
}
int triangle::area()
{
	int half = perimeter() / 2;
	return(sqrt(half*(half-AB())*(half-BC())*(half-AC())));
}
int triangle::AB()//one two
{
	return(calculatingdistance(one, two));
}
int triangle::BC()
{
	return(calculatingdistance(two, three));
}//two three
int triangle::AC()//one three
{
	return(calculatingdistance(one, three));
}
void triangle::setcenterpoint()
{
	centerpoint.x = (one.x + two.x + three.x) / 3;
	centerpoint.y = (one.y + two.y + three.y) / 3;
}
bool triangle::can()
{
	if (AB() == BC() || AC() == BC() || AB() == AC())
		return true;
	return false;
}
bool triangle::deu()
{
	if (AB() == BC() && BC() == AC())
		return true;
	return false;
}
bool triangle::vuong()
{
	int max1 = max(AB(), BC());
	int min1 = min(AB(), BC());
	int biggest = max(max1, AC());
	if ((min1*min1 + max1 * max1) == biggest * biggest)
		return true;
	return false;
}
bool triangle::normal()
{
	if (!can() && !deu() && !vuong())
		return true;
	return false;
}