#include "Header.h"
void date::input(mydate x)
{
	now.day = x.day;
	now.month = x.month;
	now.year = x.year;
}
void date::output()
{
	cout << now.day << "/" << now.month << "/" << now.year;
}
void date::increaseone()
{
	now.day += 1;
	if (now.day > 31)
	{
		now.day = 1;
		now.month++;
		if (now.month > 12)
		{
			now.day = 1;
			now.month = 1;
			now.year++;
		}
	}
}
void date::increasen(int n)
{
	for (int i = 0; i < n; i++)
		increaseone();
}
void date::decreaseone()
{
	now.day--;
	if (now.day < 0)
	{
		now.day = 1;
		now.month--;
		if (now.month < 0)
		{
			now.day = 1;
			now.month = 1;
			now.year--;
		}
	}
}
void date::decreasen(int n)
{
	for (int i = 0; i < n; i++)
		decreaseone();
}
int date::compare(mydate x)
{
	if (x.year > now.year)
		return -1;
	else if(x.year<now.year)
	{
		return 1;
	}
	else
	{
		if (x.month > now.month)
			return -1;
		else if (x.month<now.month)
		{
			return 1;
		}
		else
		{
			if (x.day > now.day)
				return -1;
			else if (x.day < now.day)
				return 1;
			else
				return 0;
		}
	}
}
int date::orderfrombegin()
{
	return((now.year - 1) * 365 + (now.month - 1) * 31 + now.day-1);
}
int date::orderfrombeginyear()
{
	return(abs(now.year - 2018) * 365+(now.month - 1) * 31 + now.day-1);
}