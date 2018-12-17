#include "Header.h"
int main()
{
	Fraction tui;
	tui.display();
	tui.~Fraction();
	Fraction a(5);
	a.display();
	Fraction b(1, 2);
	b.display();
	Fraction c(b);
	c.display();
	char *s;
	s = new char[1000];
	cout << "Enter s:";
	cin >> s;
	Fraction f(s);
	f.display();
	system("pause");
}