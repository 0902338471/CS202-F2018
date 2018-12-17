#ifndef _Ex08_
#define _Ex08_
#include <iostream>
using namespace std;
class Student {
public:
	Student();
	Student(int ids, const char *tmp, const char *tmp1,double gpas);
	Student(const Student &tmp1);
	Student(int ids, const char *tmp, const char *tmp1);//auto gpa=0
	Student(int ids, const char *tmp, double gpas);//first and last name is the same
	~Student();
	void display()
	{
		if (id == 0)
			cout << "We haven't have information for this student yet!!" << endl;
		else
		 cout << "Student ID:" << id << ",First and last name:" << firstname <<" "<< lastname << " ,GPA:" << gpa << endl;
	}
private:
	int id;
	char *firstname;
	char *lastname;
	double gpa;
};
#endif