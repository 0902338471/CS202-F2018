#ifndef _EX01_
#define _EX01_
#include <iostream>
using namespace std;
class Fraction
{
public:
	void input(int x, int y);
	void output();
	void reduce();
	void add(Fraction b);
	void substract(Fraction b);
	void multiply(Fraction b);
	void divide(Fraction b);
	int compare(Fraction b);// return 1 if bigger ,0,return -1 if smaller
	int sign();
private:
	int up;
	int down;
};
#endif