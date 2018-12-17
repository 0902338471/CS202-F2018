#include "Header.h"
IntArray::IntArray()
{
	n = 1;
	a = new int[n];
	a[0] = 0;
}
IntArray::IntArray(int x)
{
	n = x;
	a = new int[n];
	for (int i = 0; i < n; i++)
		a[i] = 0;
}
IntArray::IntArray(int b[], int x)
{
	n = x;
	a = new int[n];
	for (int i = 0; i < n; i++)
		a[i] = b[i];
}
IntArray::IntArray(const IntArray&tmp)
{
	n = tmp.n;
	a = new int[n];
	for (int i = 0; i < n; i++)
		a[i] = tmp.a[i];
}
void IntArray::operator=(const IntArray&tmp)
{
	n = tmp.n;
	a = new int[n];
	for (int i = 0; i < n; i++)
		a[i] = tmp.a[i];
}
ostream& operator<<(ostream &os, const IntArray&tmp)
{
	os << "Number of elements:" << tmp.n << endl;
	os << "Elements:";
	for (int i = 0; i < tmp.n; i++)
		os << tmp.a[i] << " ";
	return os;
}
int& IntArray::operator [](int k)
{
	return a[k];
}
istream& operator>>(istream &is, IntArray&tmp)
{
	is >> tmp.n;
	tmp.a = new int[tmp.n];
	for (int i = 0; i < tmp.n; i++)
		cin >> tmp.a[i];
	return is;
}
IntArray::operator int()
{
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += a[i];
	return sum;
}
