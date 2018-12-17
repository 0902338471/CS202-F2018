#ifndef _Ex03_
#define _Ex03_
#include <iostream>
using namespace std;
class points {
public:
	points(int x, int y);
	points();
	void operator=(const points&tmp);
	void display()
	{
		cout << "(" << xcor << "," << ycor << ")";
	}
private:
	int xcor;
	int ycor;
};
class triangle {
public:
	triangle();//defaultvalue
	triangle(points x, points y, points z);
	triangle(const triangle&tmp);//copyconstructor
	triangle(points x);//triangle as points
	triangle(points x, points y);//triangle as line
	void display()
	{
		cout << "Vertice A:"; A.display(); cout << endl;
		cout << "Vertice B:"; B.display(); cout << endl;
		cout << "Vertice C:"; C.display(); cout << endl;
	}
	~triangle();
private:
	points A;
	points B;
	points C;
};
#endif