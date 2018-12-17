#ifndef _Ex05_
#define _Ex05_
#include <iostream>
using namespace std;
class Date {
public:
	Date();//default constructor
	Date(int x, int y, int month);
	Date(const Date&tmp);
	Date(int x, int y);//current year
	Date(int x);//current month current year
	void display()
	{
		cout << "Your day:" << day << "/" << month << "/" << year << endl;
	}
	~Date();
private:
	int day;
	int month;
	int year;
};
#endif