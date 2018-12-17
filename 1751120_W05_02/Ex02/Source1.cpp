#include "Header.h"
void Object::input()
{
	cout << "ID:";
	cin >> ID;
	cout << "Full name,please:";
	cin.ignore(1000, '\n');
	getline(cin, fullname);
	cout << "Phone number:";
	getline(cin, PhoneNumber);
	cout << "Address:";
	getline(cin, Address);
}