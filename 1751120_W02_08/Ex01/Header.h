#ifndef _Ex01_
#define _Ex01_
#include <iostream>
using namespace std;
class Fraction
{
public:
	Fraction();
	Fraction(int x);//for numerator
	Fraction(int x, int y);
	Fraction(const Fraction &tmp);
	Fraction(char *s);
	void display()
	{
		cout << "Your fraction:" << num << "/" << den << endl;
	}
	~Fraction();
private:
	int num;
	int den;
};
#endif