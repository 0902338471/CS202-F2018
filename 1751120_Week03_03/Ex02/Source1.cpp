#include "Header.h"
Date::Date()
{
	day = 2; month = 11; year = 2012;
}
Date::Date(int xyear)
{
	day = 1; month = 1; year = xyear;
}
Date::Date(int xyear, int xmonth)
{
	day = 1; month = xmonth; year = xyear;
}
Date::Date(int xyear, int xmonth, int xday)
{
	day = xday; month = xmonth; year = xyear;
}
Date::Date(const Date&tmp)
{
	day = tmp.day;
	month = tmp.month;
	year = tmp.year;
}
void Date::operator=(const Date&tmp)
{
	day = tmp.day;
	month = tmp.month;
	year = tmp.year;
}
Date Date::Tomorrow()
{
	int x = day, y = month, z = year;
	if (day == 30)
	{
		if (month == 12)
		{
			x = 1; y = 1; z += 1;
		}
		else
		{
			x = 1; y += 1;
		}
	}
	else
		x++;
	return Date(z, y, x);
}
Date Date::Yesterday()
{
	int x = day, y = month, z = year;
	if (day == 1)
	{
		if (month == 1)
		{
			x = 30; y = 12; z -= 1;
		}
		else
		{
			x = 30; y -= 1;
		}
	}
	else
		x--;
	return Date(z, y, x);
}
bool Date::operator==(const Date&tmp)
{
	return(day == tmp.day&&year == tmp.year&&month == tmp.month);
}
bool Date::operator!=(const Date&tmp)
{
	return !(operator==(tmp));
}
bool Date::operator>=(const Date&tmp)
{
	if (year > tmp.year)
		return true;
	if (year < tmp.year)
		return false;
	if (month > tmp.month)
		return true;
	if(month<tmp.month)
		return false;
	if (day < tmp.day)
		return false;
	return true;
}
bool Date::operator<=(const Date&tmp)
{
	if (year < tmp.year)
		return true;
	if (year > tmp.year)
		return false;
	if (month < tmp.month)
		return true;
	if (month>tmp.month)
		return false;
	if (day > tmp.day)
		return false;
	return true;
}
bool Date::operator<(const Date&tmp)
{
	return (!(operator==(tmp)) && operator<=(tmp));
}
bool Date::operator>(const Date&tmp)
{
	return (!(operator==(tmp)) && operator>=(tmp));
}
Date Date::operator+(int k)
{
	Date tmp=*this;
	for (int i = k; i != 0; i--)
	{
		tmp = tmp.Tomorrow();
	}
	return tmp;
}
Date Date::operator-(int k)
{
	Date tmp = *this;
	for (int i = k; i != 0; i--)
	{
		tmp = tmp.Yesterday();
	}
	return tmp;
}
Date& Date::operator++()
{
	*this = Tomorrow();
	return *this;
}
Date Date::operator++(int)
{
	Date tmp = *this;
	*this = Tomorrow();
	return tmp;
}
Date& Date::operator--()
{
	*this = Yesterday();
	return *this;
}
Date Date::operator--(int)
{
	Date tmp = *this;
	*this = Yesterday();
	return *this;
}
ostream & operator<<(ostream &os, const Date&tmp)
{
	os << tmp.day << "/" << tmp.month << "/" << tmp.year;
	return os;
}
istream & operator>>(istream &is, Date &tmp)
{
	is >> tmp.day >> tmp.month >> tmp.year;
	return is;
}
Date&Date:: operator+=(int k)
{
	for (int i = k; i != 0; i--)
	{
		this->operator++();
	}
	return *this;
}
Date&Date::operator-=(int k)
{
	for (int i = k; i != 0; i--)
	{
		this->operator--();
	}
	return *this;
}
Date::operator int()
{
	return ((month - 1) * 30 + day - 1);
}
Date::operator long()
{
	return((year - 1) * 365 + (month - 1) * 30 + day - 1);
}