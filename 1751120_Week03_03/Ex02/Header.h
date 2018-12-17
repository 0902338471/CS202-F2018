#ifndef _Ex02_
#define _Ex02_
#include <iostream>
using namespace std;
class Date {
public:
	Date();
	Date(int xyear);
	Date(int xyear, int xmonth);
	Date(int xyear, int xmonth, int xday);
	Date(const Date&tmp);
	void operator=(const Date&tmp);
	Date Tomorrow();
	Date Yesterday();
	bool operator==(const Date&tmp);
	bool operator!=(const Date&tmp);
	bool operator>=(const Date&tmp);
	bool operator<=(const Date&tmp);
	bool operator<(const Date&tmp);
	bool operator>(const Date&tmp);
	Date operator+(int k);
	Date operator-(int k);
	Date& operator++();
	Date operator++(int);
	Date& operator--();
	Date operator--(int);
	Date &operator+=(int k);
	Date&operator-=(int k);
	friend ostream & operator<<(ostream &os, const Date&tmp);
	friend istream & operator>>(istream &is,  Date &tmp);
	operator int();
	operator long();
private:
	int day;
	int month;
	int year;
};
#endif
