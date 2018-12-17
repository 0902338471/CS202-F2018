#ifndef _Ex04_
#define _Ex04_
#include <iostream>
using namespace std;
class points
{
public:
	points()
	{
		xcor = 0;
		ycor = 0;
	}
	points(int x, int y)
	{
		xcor = x;
		ycor = y;
	}
	void operator=(const points&tmp)
	{
		xcor = tmp.xcor;
		ycor = tmp.ycor;
	}
	void display()
	{
		cout << "(" << xcor << "," << ycor << ")";
	}
private:
	int xcor;
	int ycor;
};
class Rectangle {
public:
	Rectangle();
	Rectangle(points x, points y);
	Rectangle(const Rectangle&tmp);
	Rectangle(points x);//one point is at the origin
	Rectangle(points x, int k);
	~Rectangle();//both points is at the same position
	void display()
	{
		cout << "Topleft:"; topleft.display(); cout << endl;
		cout << "Bottomright:"; bottomright.display(); cout << endl;
	}
private:
	points topleft;
	points bottomright;
};
#endif