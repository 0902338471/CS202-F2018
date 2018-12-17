#include "Header.h"
Time::Time()
{
	minute = 0;
	second = 0;
	hour = 0;
}
Time::Time(int x, int y, int z)
{
	minute = x;
	second = y;
	hour = z;
}
Time::Time(const Time&tmp)
{
	minute = tmp.minute;
	second = tmp.second;
	hour = tmp.hour;
}
Time::Time(int hours)
{
	hour = hours;
	second = 0;
	minute = 0;
}
Time::Time(int minutes,int seconds)
{
	minute = minutes;
	hour = 0;
	second = seconds;
}
Time::~Time()
{
	cout << "Destructor";
}