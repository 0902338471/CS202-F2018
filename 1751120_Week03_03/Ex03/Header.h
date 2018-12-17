#ifndef _Ex03_
#define _Ex03_
#include <iostream>
using namespace std;
class IntArray {
public:
	IntArray();
	IntArray(int x);
	IntArray(int b[], int x);
	IntArray(const IntArray&tmp);
	void operator=(const IntArray&tmp);
	friend ostream& operator<<(ostream &os, const IntArray&tmp);
	friend istream& operator>>(istream &is, IntArray&tmp);
	int& operator [](int k);
	operator int();
private:
	int n;
	int *a;
};
#endif