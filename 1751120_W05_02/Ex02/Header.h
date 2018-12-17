#ifndef _Ex02_
#define _Ex02_
#include <iostream>
#include <string>
using namespace std;
class Object {
public:
	virtual void input();
	virtual void output()
	{
		cout << "ID:" << ID << endl;
		cout << "Full name,please:" << fullname << endl;
		cout << "Phone number:" << PhoneNumber << endl;
		cout << "Address:" << Address << endl;
	}
	virtual float Salary() = 0;
private:
	int ID;
	string fullname;
	string PhoneNumber;
	string Address;
};
class TA:public Object {
public:
	void input()
	{
		Object::input();
		cout << "Fixed payment:";
		cin >> Fixedpayment;
	}
	void output()
	{
		Object::output();
		cout << endl << "Fixed payment:" << Fixedpayment << endl;
	}
	float Salary()
	{
		return Fixedpayment;
	}
private:
	int Fixedpayment;
};
class CBLecturer :public Object {
public:
	void input()
	{
		Object::input();
		cout << "Rated per Class:";
		cin >> RateperClass;
		cout << "Number Of Class:";
		cin >> NumClass;
	}
	float Salary(){
		return RateperClass * NumClass * 1000;
	}
	void output()
	{
		Object::output();
		cout << "Rated per Class:" << RateperClass << endl;
		cout << "Number of Class:" << NumClass << endl;
	}
private:
	float RateperClass;
	int NumClass;
};
class FullLec :public Object {
public:
	void input()
	{
		Object::input();
		cout << "Rated per Class:";
		cin >> RateperClass;
		cout << "Number Of Class:";
		cin >> NumClass;
		cout << "Fixed payment:";
		cin >> Fixpayment;
	}
	void output()
	{
		Object::output();
		cout << "Rated per Class:" << RateperClass << endl;
		cout << "Number of Class:" << NumClass << endl;
		cout << "Fixed payment:" << Fixpayment << endl;
	}
	float Salary()
	{
		return Fixpayment + RateperClass * NumClass * 1000;
	}
private:
	int Fixpayment;
	float RateperClass;
	int NumClass;
};
#endif
