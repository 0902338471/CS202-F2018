#ifndef _Ex06_
#define _Ex06_
#include <iostream>
using namespace std;
class Time {
public:
	Time();
	Time(int x, int y, int z);
	Time(const Time&tmp);
	Time(int hours);
	Time(int minutes,int seconds);
	~Time();
	void display()
	{
		cout << "Minute:" << minute << endl;
		cout << "Second:" << second << endl;
		cout << "Hour:" << hour << endl;
	}
private:
	int hour;
	int minute;
	int second;
};
#endif