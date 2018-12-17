#include "Header.h"
int main()
{
	int IDS;
	string hotens;
	string diachis;
	DOB x;
	cout << "Enter ID:";
	cin >> IDS;
	cout << "Enter hoten:";
	cin >> hotens;
	cout << "Enter diachis:";
	cin >> diachis;
	cout << "Enter date of birth:";
	cin >> x;
	NVSX tui(IDS, hotens,x, diachis,8);
	tui.printout();
	NVSX tui2(1);
	tui2.printout();
	cout << "Luong:" << tui.tinhluong();
	NVCN tui1(IDS, hotens, x, diachis, 5);
	tui1.printout();
	cout << "Luong:" << tui1.tinhluong();
	system("pause");
}