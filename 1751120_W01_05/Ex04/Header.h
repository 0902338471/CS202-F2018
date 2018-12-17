#ifndef _Ex04_
#define _Ex04_
#include <iostream>
using namespace std;
struct point {
	int x;
	int y;
};
class rec {
public:
	void input(point up,point down);
	void ouput();
	int diagonal();
	int perimeter();
	int area();
private:
	point topleft;
	point bottomright;
};
#endif