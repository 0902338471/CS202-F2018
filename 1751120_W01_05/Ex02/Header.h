#ifndef _Ex02_
#define _Ex02_
#include <iostream>
using namespace std;
struct mypoint
{
	int xcor;
	int ycor;
};
class line
{
public:
	void input(mypoint x, mypoint y);
	void output();
	int distancebetweentwopoints();
private:
	mypoint start;
	mypoint end;
};
#endif