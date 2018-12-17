#ifndef _Ex02_
#define _Ex02_
#include <iostream>
#include <string>
using namespace std;
class DOB {
public:
	DOB()
	{
		day = 1;
		month = 1;
		year = 1;
	}
	DOB(int days, int months, int years)
	{
		day = days;
		month = months;
		year = years;
	}
	DOB&operator=(const DOB&tmp)
	{
		day = tmp.day;
		month = tmp.month;
		year = tmp.year;
		return *this;
	}
	friend ostream &operator<<(ostream &os, const DOB&tmp)
	{
		os << tmp.day << "/" << tmp.month << "/" << tmp.year << endl;
		return os;
	}
	friend istream &operator>>(istream &is, DOB &tmp)
	{
		is >> tmp.day >> tmp.month >> tmp.year;
		return is;
	}
private:
	int day;
	int month;
	int year;
};
class Staff {
public:
	Staff();
	Staff(const Staff&tmp);
	Staff(string names, int ages, DOB owns, int bases, int papers, int projects);
	Staff(int bases, int papers, int projects);
	Staff(string names, int ages, DOB owns);
	void print()
	{
		cout << "Name:" << name << endl;
		cout << "Age:" << age << endl;
		cout << "Date of birth:" << own << endl;
	}
	void input(){
		cout << "Please input information!!" << endl;
		cout << "Name:";
		cin >> name;
		cout << "Age:";
		cin >> age;
		cout << "DOB:";
		cin >> own;
		cout << "Base Salary:";
		cin >>base;
		cout << "Paper salary:";
		cin >>paper;
		cout << "Project salary:";
		cin >> project;
	}
	int forbase()
	{
		return base;
	}
	int forpaper()
	{
		return paper;
	}
	int forproject()
	{
		return project;
	}
private:
	string name;
	int age;
	DOB own;
	int base;
	int paper;
	int project;
};
class TA :public Staff {
public:
	TA()
	{
		numberofworkhours = 0;
	}
	TA(const TA&tmp) :Staff (tmp)
	{
		numberofworkhours = tmp.numberofworkhours;
	}
	TA(const Staff&tmp, int numberofworkhourses):Staff(tmp)
	{
		numberofworkhours = numberofworkhourses;
	}
	TA(int numberofworkhourses)
	{
		numberofworkhours = numberofworkhourses;
	}
	TA(string names, int ages, DOB owns, int bases, int papers, int projects, int num) :Staff(names, ages, owns, bases, papers, projects)
	{
		numberofworkhours = num;
	}
	friend ostream &operator<<(ostream &os, TA&tmp)
	{
		tmp.Staff::print();
		os << "Number of work hours:" << tmp.numberofworkhours << endl;
		tmp.calculatingsalary();
		return os;
	}
	friend istream &operator>>(istream &is, TA&tmp)
	{
		tmp.Staff::input();
		cout << "Number of work hours:";
		is >> tmp.numberofworkhours;
		return is;
	}
	void calculatingsalary()
	{
		cout << "Salary of this TA:" << 0.8*numberofworkhours*Staff::forbase() << endl;
	}
private:
	int numberofworkhours;
};
class Lecturers :public Staff {
public:
	Lecturers()
	{
		numberoflecture = 0;
		numberofpapers = 0;
	}
	Lecturers(const Lecturers&tmp) :Staff(tmp)
	{
		numberoflecture = tmp.numberoflecture;
		numberofpapers = tmp.numberofpapers;
	}
	Lecturers(int numberoflectures,int num)
	{
		numberoflecture = numberoflectures;
		numberofpapers = num;
	}
	Lecturers(const Staff&tmp, int numberoflectures,int num) :Staff(tmp)
	{
		numberoflecture = numberoflectures;
		numberofpapers = num;
	}
	Lecturers(string names, int ages, DOB owns, int bases, int papers, int projects, int num1,int num2) :Staff(names, ages, owns, bases, papers, projects)
	{
		numberoflecture = num1;
		numberofpapers = num2;
	}
	friend ostream &operator<<(ostream &os,  Lecturers&tmp)
	{
		tmp.Staff::print();
		os << "Number of lecturing hours:" << tmp.numberoflecture << endl;
		os << "Numberof papers support:" << tmp.numberofpapers << endl;
		tmp.calculatingsalary();
		return os;
	}
	friend istream &operator>>(istream &is, Lecturers &tmp)
	{
		tmp.Staff::input();
		cout << "Number of lecturing hours:";
		is >> tmp.numberoflecture;
		cout << "Numberof papers support:";
		is >> tmp.numberofpapers;
		return is;
	}
	void calculatingsalary()
	{
		cout << "Salary of this Lecturer:" << 1.2*numberoflecture*Staff::forbase() + numberofpapers * Staff::forpaper() << endl;
	}
private:
	int numberoflecture;
	int numberofpapers;
};
class Researchers :public Staff {
public:
	Researchers()
	{
		numresearch = 0;
		numpaper = 0;
	}
	Researchers(const Researchers&tmp) :Staff(tmp)
	{
		numresearch = tmp.numresearch;
		numpaper = tmp.numpaper;
	}
	Researchers(int n1, int n2)
	{
		numresearch = n1;
		numpaper = n2;
	}
	Researchers(const Staff&tmp, int n1, int n2):Staff(tmp)
	{
		numresearch = n1;
		numpaper = n2;
	}
	Researchers(string names, int ages, DOB owns, int bases, int papers, int projects, int num1, int num2) :Staff(names, ages, owns, bases, papers, projects)
	{
		numresearch = num1;
		numpaper = num2;
	}
	friend ostream&operator<<(ostream &os,  Researchers&tmp)
	{
		tmp.Staff::print();
		cout << "Number of research projects is:" << tmp.numresearch << endl;
		cout << "Number of paper is:" << tmp.numpaper << endl;
		tmp.calculatingsalary();
		return os;
	}
	friend istream &operator>>(istream &is, Researchers &tmp)
	{
		tmp.Staff::input();
		cout << "Number of research projects is:";
		is >> tmp.numresearch;
		cout << "Number of paper supporting is:";
		is >> tmp.numpaper;
		return is;
	}
	void calculatingsalary()
	{
		cout << "Salary of this researcher is :" << numresearch * Staff::forproject() + 1.1*numpaper*Staff::forpaper() << endl;
	}
private:
	int numresearch;
	int numpaper;
};
#endif