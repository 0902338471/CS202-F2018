#include "Header.h"
int main()
{
	cout << "Welcome to Prince and Princess Game!!!!";
	Gate **p;
	cout << "How many gates are there in this game?";
	int n;
	cin >> n;
	p = new Gate*[n];
	cout << endl << "Please enter prince information:" << endl;
	HoangTu tung;
	tung.input();
	bool checkpass = true;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter " << i + 1 << " gates information,please" << endl;
		cout << "What type of gate do you want to input?" << endl;
		cout << "1.Business Gate" << endl << "2.Academic Gate" <<endl<< "3.Power Gate" << endl << "Enter key:";
		int key;
		cin >> key;
		if (key == 1)
		{
			p[i] = new BusinessGate;
		}
		else if (key == 2)
		{
			p[i] = new AcademicGate;
		}
		else if (key == 3)
		{
			p[i] = new PowerGate;
		}
		p[i]->input();
		if (p[i]->Pass(tung) == false)
			checkpass = false;
	}
	if (checkpass == true)
	{
		cout << endl << "Congratulations,you have passed all the gate!!!" << endl;
		tung.output();
	}
	else
	{
		cout << endl << "Sorry,you can't passed all the gate:(((";
	}
	system("pause");
}