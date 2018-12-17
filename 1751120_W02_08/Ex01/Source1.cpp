#include "Header.h"
Fraction::Fraction()
{
	num = 0;
	den = 1;
}
Fraction::Fraction(int x)
{
	num = x;
	den = 1;
}
Fraction::Fraction(int x, int y)
{
	num = x;
	den = y;
}
Fraction::Fraction(const Fraction &tmp)
{
	num = tmp.num;
	den = tmp.den;
}
Fraction::Fraction(char *s)
{
	string up;
	string down;
	int i = 0;
	while (s[i] != '/')
	{
		up += s[i];
		i++;
	}
	i++;
	while (s[i] != '\0')
	{
		down += s[i];
		i++;
	}
	int sum = 0;
	int start = 1;
	for (int i = up.length() - 1; i >= 0; i--)
	{
		sum += (up[i] - 48)*start;
		start *= 10;
	}
	num = sum;
	start = 1;
	sum = 0;
	for (int i = down.length() - 1; i >= 0; i--)
	{
		sum += (down[i] - 48)*start;
		start *= 10;
	}
	den = sum;
}
Fraction::~Fraction()
{
	num = 0;
	den = 1;
}