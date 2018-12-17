#include "Header.h"
int main()
{
	Fraction a, b;
	/*
	a.input
	b. output
	c. reduce
	d. add
	e. subtract
	f. multiply
	g. divide
	h. compare
	*/
	a.input(0, 6);
	b.input(18, 2);
	cout << "Fraction a:";
	a.output();
	cout << endl;
	cout << "Fraction b:";
	b.output();
	cout << endl << "After reducing a becomes:";
	a.reduce();
	a.output();
	cout << endl << "After reducing b becomes:";
	b.reduce();
	b.output();
	a.add(b);
	cout << endl << "After adding b into a,a becomes:";
	a.output();
	a.substract(b);
	cout << endl << "After substracting a by b,a becomes:";
	a.output();
	a.multiply(b);
	cout << endl << "After multiplying a by b,a becomes:";
	a.output();
	a.divide(b);
	cout << endl << "After diviing a by b,a becomes:";
	a.output();
	cout << endl << "Comparison!!!a";
	if (a.compare(b) == 1)
		cout << ">";
	else if (a.compare(b) == -1)
		cout << "<";
	else
		cout << "=";
	cout << "b" << endl;
	cout << "Fraction 's sign:a ";
	if (a.sign() == 1)
		cout << ">0";
	else if (a.sign() == -1)
		cout << "<0";
	else
		cout << "=0";
	system("pause");
	return 0;
}