#ifndef _Ex07_
#define _Ex07_
#define REP(i,a,b) for(int i=a;i<b;i++)
#include <iostream>
using namespace std;
class MyArray {
public:
	MyArray();
	MyArray(int n1, int *b);
	MyArray(const MyArray &tmp);
	MyArray(int n);//all of the elements is equal 0
	MyArray(int x, int k);//only 1 elements
	~MyArray();
	void display()
	{
		cout << "Number of elements:" << n;
		cout << "  Elements:";
		if (a == NULL)
			cout << "NULL";
		else
		{
			REP(i, 0, n)
			{
				cout << a[i] << " ";
			}
		}
		cout << endl;
	}
private:
	int *a;
	int n;
};
#endif