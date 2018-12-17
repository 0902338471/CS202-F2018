#ifndef _Ex01_
#define _Ex01_
#include <iostream>
using namespace std;
class Fraction {
public:
	Fraction();
	void convert();
	Fraction(int x, int y);
	Fraction(int x);
	Fraction(const Fraction&tmp);
	void operator=(const Fraction&tmp);
	bool isnegative();
	bool operator==(const Fraction&tmp);
	bool operator!=(const Fraction&tmp);
	bool operator>=(const Fraction&tmp);
	bool operator>(const Fraction&tmp);
	bool operator<=(const Fraction&tmp);
	bool operator<(const Fraction&tmp);
	Fraction &operator+=(const Fraction&tmp);
	Fraction &operator-=(const Fraction&tmp);
	Fraction &operator*=(const Fraction&tmp);
	Fraction &operator/=(const Fraction&tmp);
	Fraction &operator++();
	Fraction operator++(int);
	Fraction &operator--();
	Fraction operator--(int);
	friend ostream& operator<<(ostream &os, const Fraction&tmp);
	//operator float();
private:
	int up;
	int down;
};
Fraction operator+(const Fraction&tmp, const Fraction&tmp1);
Fraction operator-(const Fraction&tmp, const Fraction&tmp1);
Fraction operator*(const Fraction&tmp,const Fraction&tmp1);
Fraction operator/(const Fraction&tmp,const Fraction&tmp1);
#endif