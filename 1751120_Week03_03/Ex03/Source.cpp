#include "Header.h"
int main()
{
	IntArray m1;
	IntArray m2(7);
	int a[100];
	int n = 7;
	for (int i = 0; i < n; i++)
	{
		a[i] = i * 2 / 7;
	}
	IntArray m3(a, n);
	cout << m3 << endl;
	IntArray m4(m2);
	cout << m4 << endl;
	IntArray m5;
	m5 = m2;

	cin >> m2;
	cout << m2 << endl;

	cout << m3[4] << endl;
	m3[7] = 8;
	cout << m3[7] << endl;
	cout << (int)m4;
	system("pause");
}