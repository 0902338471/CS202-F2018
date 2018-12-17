#include "Header.h"
Rectangle::Rectangle()
{
	topleft = points(0, 0);
	bottomright = points(0, 0);
}
Rectangle::Rectangle(points x, points y)
{
	topleft = x;
	bottomright = y;
}
Rectangle::Rectangle(const Rectangle&tmp)
{
	topleft = tmp.topleft;
	bottomright = tmp.bottomright;
}
Rectangle::Rectangle(points x)//one point is at the origin
{
	topleft = x;
	bottomright = points(0, 0);
}
Rectangle::Rectangle(points x, int k)
{
	topleft = x;
	bottomright = topleft;
}
Rectangle::~Rectangle()
{
	cout << "Desstructor";
}