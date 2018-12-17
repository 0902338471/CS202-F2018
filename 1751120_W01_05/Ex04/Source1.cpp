#include "Header.h"
void rec::input(point up,point down)
{
	topleft.x = up.x;
	topleft.y = up.y;
	bottomright.x = down.x;
	bottomright.y = down.y;
}
void rec::ouput()
{
	cout << "Topleft point is:(" << topleft.x << "," << topleft.y << ")" << endl;
	cout << "Bottomright point is:(" << bottomright.x << "," << bottomright.y << ")" << endl;
}
int rec::diagonal()
{
	return(sqrt((topleft.x - bottomright.x)*(topleft.x - bottomright.x) + (topleft.y - bottomright.y)*(topleft.y - bottomright.y)));
}
int rec::perimeter()
{
	return((abs(topleft.x - bottomright.x) + abs(topleft.y - bottomright.y)) * 2);
}
int rec::area()
{
	return(abs((topleft.x - bottomright.x))*abs((topleft.y - bottomright.y)));
}