#ifndef _EX03_
#define _EX03_
#include <iostream>
#include <algorithm>
using namespace std;
struct point
{
	int x;
	int y;
};
class triangle {
public:
	void input(point a, point b, point c);
	void output();
	int perimeter();
	int calculatingdistance(point start, point end);
	int area();
	int AB();
	int BC();
	int AC();
	void setcenterpoint();
	bool can();
	bool deu();
	bool vuong();
	bool normal();
	void displaycenterpoint()
	{
		setcenterpoint();
		cout << "(" << centerpoint.x << "," << centerpoint.y << ")";
	}
private:
	point one;
	point two;
	point three;
	point centerpoint;
};
#endif