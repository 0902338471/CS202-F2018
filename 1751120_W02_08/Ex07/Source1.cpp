#include "Header.h"
MyArray::MyArray()
{
	n = 0;
	a = NULL;
}
MyArray::MyArray(int n1, int *b)
{
	n = n1;
	a = new int[n];
	REP(i, 0, n)
		a[i] = b[i];
}
MyArray::MyArray(const MyArray &tmp)
{
	n = tmp.n;
	a = new int[n];
	REP(i, 0, n)
		a[i] = tmp.a[i];
}
MyArray::MyArray(int n1)
{
	n = n1;
	a = new int[n];
	REP(i, 0, n)
		a[i] = 0;
}
MyArray::MyArray(int x, int k)
{
	n = 1;
	a = new int[n];
	a[0] = x;
}
MyArray::~MyArray()
{
	cout << "Destructor";
}