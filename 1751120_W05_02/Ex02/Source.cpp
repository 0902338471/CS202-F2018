#include "Header.h"
int main()
{
	Object **p;
	cout << "Number of Lecturer you want to input:";
	int n;
	cin >> n;
	p = new Object*[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Which type do you want to input?" << endl;
		cout << "1.Teaching assistant" << endl << "2.Contract-based lecturer" << endl << "3.Full-time Lecturer" << endl << "Enter key:";
		int key;
		cin >> key;
		if (key == 1)
			p[i] = new TA;
		else if (key == 2)
			p[i] = new CBLecturer;
		else if (key == 3)
			p[i] = new FullLec;
		p[i]->input();
	}
	cout << endl << "Displaying Information of Lecturer.";
	for (int i = 0; i < n; i ++ )
	{
		p[i]->output();
	}
	float Total = 0;
	for (int i = 0; i < n; i++)
	{
		cout << "Salary of Lecturer " << i + 1 << ":" << p[i]->Salary() << endl;
		Total += p[i]->Salary();
	}
	cout << "Total amount of money money that the school has to pay per month for all " << n << " lecturers:" << Total;
	system("pause");
}