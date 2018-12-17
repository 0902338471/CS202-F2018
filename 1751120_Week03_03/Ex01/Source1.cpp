#include "Header.h"
/*Fraction::operator float()
{
	float a = up;
	float b = down;
	return (a / b);
}*/
void Fraction::convert()
{
	if (down < 0)
	{
		up = -up;
		down = -down;
	}
}
bool Fraction::isnegative()
{
	if (up>0&&down<0||up<0&&down>0)
	{
		return true;
	}
	return false;
}
Fraction::Fraction()
{
	up = 0;
	down = 1;
}
Fraction::Fraction(int x, int y)
{
	up = x;
	down = y;
}
Fraction::Fraction(int x)
{
	up = x;
	down = 1;
}
Fraction::Fraction(const Fraction&tmp)
{
	up = tmp.up;
	down = tmp.down;
}
void Fraction::operator=(const Fraction&tmp)
{
	up = tmp.up;
	down = tmp.down;
}
Fraction operator-(const Fraction&tmp, const Fraction&tmp1)
{
	Fraction news(tmp);
	news -= tmp1;
	return news;
}
Fraction operator+(const Fraction&tmp, const Fraction&tmp1)
{
	Fraction news(tmp);
	news += tmp1;
	return news;
}
Fraction operator*(const Fraction&tmp, const Fraction&tmp1)
{
	Fraction news(tmp);
	news *= tmp1;
	return news;
}
Fraction operator/(const Fraction&tmp, const Fraction&tmp1)
{
	Fraction news(tmp);
	news /= tmp1;
	return news;
}
bool Fraction::operator==(const Fraction&tmp)
{
	if (up == 0 || tmp.up == 0)
	{
		if (up == 0 && tmp.up == 0)
			return true;
		return false;
	}
	if (down == 0 || tmp.down == 0)
		return false;
	if (up%tmp.up != 0 && down%tmp.down != 0)
		return false;
	if (up / tmp.up == down / tmp.down)
		return true;
	return false;
}
bool Fraction::operator!=(const Fraction&tmp)
{
	if (down == 0 || tmp.down == 0)
		return false;
	if (*this == tmp)
		return false;
	return true;
}
bool Fraction::operator>=(const Fraction&tmp)
{
	if (down == 0 || tmp.down == 0)
		return false;
	convert();
	if (up*tmp.down >= tmp.up*down)
		return true;
	return false;
}
bool Fraction::operator>(const Fraction&tmp)
{
	if (down == 0 || tmp.down == 0)
		return false;
	convert();
	if (up*tmp.down > tmp.up*down)
		return true;
	return false;
}
bool Fraction::operator<=(const Fraction&tmp)
{
	if (down == 0 || tmp.down == 0)
		return false;
	convert();
	if (up*tmp.down <= tmp.up*down)
		return true;
	return false;
}
bool Fraction::operator<(const Fraction&tmp)
{
	if (down == 0 || tmp.down == 0)
		return false;
	convert();
	if (up*tmp.down < tmp.up*down)
		return true;
	return false;
}
Fraction &Fraction::operator+=(const Fraction&tmp)
{
	up = up * tmp.down + tmp.up*down;
	down = down * tmp.down;
	return *this;
}
Fraction &Fraction::operator-=(const Fraction&tmp)
{
	up = up * tmp.down - tmp.up*down;
	down = down * tmp.down;
	return *this;
}
Fraction &Fraction::operator*=(const Fraction&tmp)
{
	up = up * tmp.up;
	down = down * tmp.down;
	return *this;
}
Fraction &Fraction::operator/=(const Fraction&tmp) {
	up = up * tmp.down;
	down = down * tmp.up;
	return *this;
}
Fraction &Fraction::operator++()
{
	up += down;
	return *this;
}
Fraction Fraction::operator++(int)
{
	int tmp = up;
	up += down;
	return Fraction(tmp, down);
}
Fraction &Fraction::operator--()
{
	up -= down;
	return *this;
}
Fraction Fraction::operator--(int)
{
	int tmp = up;
	up -= down;
	return Fraction(tmp, down);
}
ostream& operator<<(ostream &os, const Fraction&tmp)
{
	os << tmp.up << "/" << tmp.down << endl;
	return os;
}


