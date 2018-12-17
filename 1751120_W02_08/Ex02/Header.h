#ifndef _Ex02_
#define _Ex02_
#include <iostream>
using namespace std;
class points {
public:
	points(int x, int y);
	points();
	void displaypoints()
	{
		cout << "(" << xcor << "," << ycor << ")";
	}
	void operator=(const points &tmp);
	points operator*(int num);
	points operator-(const points&tmp);
private:
	int xcor;
	int ycor;
};
class line {
public:
	line(points x, points y);
	line(points x);//end point is at the origin
	line();//default value(start and end is at the origin)
	line(points x, points middle,int k);//=>point end
	line(const line&tmp);//copy constructor
	void display()
	{
		cout << "Starting point:"; start.displaypoints(); cout << endl;
		cout << "End point:"; end.displaypoints(); cout << endl;
	}
	~line();
private:
	points start;
	points end;
};
#endif