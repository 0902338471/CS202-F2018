#include "Header.h"
int main()
{
	line tui;
	mypoint xinput;
	mypoint yinput;
	xinput.xcor = 3;
	xinput.ycor = 4;
	yinput.xcor = 6;
	yinput.ycor = 8;
	tui.input(xinput, yinput);
	tui.output();
	cout << endl << "Distance between 2 points is:" << tui.distancebetweentwopoints();
	system("pause");
	return 0;
}