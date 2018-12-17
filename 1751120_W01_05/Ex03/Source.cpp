#include "Header.h"
int main()
{
	triangle tui;
	point first;
	first.x = 1;
	first.y =1;
	point second;
	second.x = 2;
	second.y = 2;
	point three;
	three.x = 3;
	three.y = 1;
	tui.input(first, second, three);
	tui.output();
	cout << endl << "Type of this triangle is:";
	if (tui.normal() == true)
		cout << "Normal triangle";
	else
	{
		if (tui.vuong())
		{
			if (tui.can())
				cout << "Tam giac vuong can";
			else
				cout << "Tam giac vuong";
		}
		else if (tui.deu())
		{
			cout << "Tam giac deu";
		}
		else
			cout << "Tam giac can";
	}
	cout << endl << "The perimeter of this triangle is:" << tui.perimeter();
	cout << endl << "The area of this triangle is:" << tui.area();
	cout <<endl<< "Center point is:";
	tui.displaycenterpoint();
	system("pause");
}