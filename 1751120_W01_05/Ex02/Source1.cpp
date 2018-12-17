#include "Header.h"
int line::distancebetweentwopoints()
{
	int difx = start.xcor - end.xcor;
	int dify = start.ycor - end.ycor;
	return(sqrt(difx*difx + dify * dify));
}
void line::input(mypoint x, mypoint y)
{
	start.xcor = x.xcor;
	start.ycor = x.ycor;
	end.xcor = y.xcor;
	end.ycor = y.ycor;
}
void line::output()
{
	cout << "Starting point:(" << start.xcor << "," << start.ycor << ")";
	cout << endl << "Ending point:(" << end.xcor << "," << end.ycor << ")";
}