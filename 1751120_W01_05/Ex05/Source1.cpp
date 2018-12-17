#include "Header.h"
int main()
{
	date tui;
	mydate in;
	in.day = 1;
	in.month = 1;
	in.year = 3;
	tui.input(in);
	cout  << "Today is:";
	tui.output();
	cout << endl<< "After increasing one day:";
	tui.increaseone();
	tui.output();
	int n;
	cout << endl << "Enter n:";
	cin >> n;
	cout << endl << "After increasing n days:";
	tui.increasen(n);
	tui.output();
	cout << endl << "After decreasing one day:";
	tui.decreaseone();
	tui.output();
	cout << endl << "After decreasing n days:";
	tui.decreasen(n);
	tui.output();
	mydate tmp1;
	cout << endl << "Please enter H:day ,month and year";
	cin >> tmp1.day >> tmp1.month >> tmp1.year;
	if (tui.compare(tmp1) == 1)
		cout << "Your current day is bigger than H ";
	else if (tui.compare(tmp1) == -1)
		cout << "Your current day is smaller than H";
	else
		cout << "Your cureent day is H";
	cout << endl << "The order of your date from 1/1/1 is:" << tui.orderfrombegin();
	cout << endl << "The order of your date from 1/1/2018 is:" << tui.orderfrombeginyear();
	system("pause");
}