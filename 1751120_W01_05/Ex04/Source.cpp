#include "Header.h"
int main()
{
	rec tui;
	point first;
	first.x = 3;
	first.y = 5;
	point second;
	second.x = 7;
	second.y = 3;
	tui.input(first, second);
	tui.ouput();
	cout << endl << "Length of the diagonal is:" << tui.diagonal();
	cout << endl << "Perimeter is:" << tui.perimeter();
	cout << endl << "Area is:" << tui.area();
	system("pause");
}