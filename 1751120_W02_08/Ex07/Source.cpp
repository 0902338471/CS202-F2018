#include "Header.h"
int main()
{
	MyArray a;
	a.display();
	int n1;
	cout << "Please enter n:";
	cin >> n1;
	int *b1;
	b1 = new int[n1];
	cout << "Please enter elements:";
	REP(i, 0, n1)
		cin >> b1[i];
	MyArray b(n1, b1);
	b.display();
	MyArray c(b);
	c.display();
	MyArray d(n1);
	d.display();
	MyArray e(n1, 1);
	e.display();
	system("pause");
}