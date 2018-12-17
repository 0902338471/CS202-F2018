#ifndef _Ex05_
#define _Ex05
#include <iostream>
using namespace std;
struct mydate {
	int day;
	int month;
	int year;
};
class date {
public:
	void input(mydate x);
	void output();
	void increaseone();
	void increasen(int n);
	void decreaseone();
	void decreasen(int n);
	int compare(mydate x);
	int orderfrombegin();
	int orderfrombeginyear();
private:
	mydate now;
};
#endif