#include "Header.h"
void Fraction::input(int x, int y)
{
	up = x;
	down = y;
}
void Fraction::output()
{
	cout << up << "/" << down;
}
void Fraction::reduce()
{
	//findgcd
	int tmpa = up;
	int tmpb = down;
	while (tmpb != 0)
	{
		int tmp = tmpb;
		tmpb = tmpa % tmpb;
		tmpa = tmp;
	}
	up = up / tmpa;
	down = down / tmpa;
}
void Fraction::add(Fraction b)
{
	up = up * b.down + b.up*down;
	down = down * b.down;
}
void Fraction::substract(Fraction b)
{
	up = up * b.down - b.up*down;
	down = down * b.down;
}
void Fraction::multiply(Fraction b)
{
	up = up * b.up;
	down = down * b.down;
}
void Fraction::divide(Fraction b)
{
	up = up * b.down;
	down = down * b.up;
}
int Fraction::compare(Fraction b)
{
	if (up*b.down > b.up*down)
		return 1;
	if (up*b.down < b.up*down)
		return -1;
	return 0;
}
int Fraction::sign()
{
	if (up*down > 0)
		return 1;
	if (up*down < 0)
		return -1;
	return 0;
}