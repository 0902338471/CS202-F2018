#include "Header.h"
Date::Date()
{
	day = 0;
	month = 0;
	year = 0;
}
Date::Date(int x, int y, int z)
{
	day = x;
	month = y;
	year = z;
}
Date::Date(int x, int y)
{
	day = x;
	month = y;
	year = 2018;
}
Date::Date(int x)
{
	day = x;
	month = 10;
	year = 2018;
}
Date::Date(const Date& tmp)
{
	day = tmp.day;
	month = tmp.month;
	year = tmp.year;
}
Date::~Date()
{
	cout << "Destructor";
}