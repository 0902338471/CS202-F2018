#include "Header.h"
Student::Student()
{
	id = 0;
	firstname = NULL;
	lastname = NULL;
	gpa = 0;
}
Student::Student(int ids, const char *tmp, const char *tmp1, double gpas)
{
	id = ids;
	int count = 0;
	for (int i = 0; tmp[i] != '\0'; i++)
		count++;
	firstname = new char[count];
	for (int i = 0; i < count; i++)
		firstname[i] = tmp[i];
	firstname[count] = '\0';
	count = 0;
	for (int i = 0; tmp1[i] != '\0'; i++)
		count++;
	lastname = new char[count];
	for (int i = 0; i < count; i++)
		lastname[i] = tmp1[i];
	lastname[count] = '\0'; 
	gpa = gpas;
}
Student::Student(const Student &tmp1)
{
	id = tmp1.id;
	int count = 0;
	for (int i = 0; tmp1.firstname[i] != '\0'; i++)
		count++;
	firstname = new char[count];
	for (int i = 0; i < count; i++)
		firstname[i] = tmp1.firstname[i];
	firstname[count] = '\0';
	count = 0;
	for (int i = 0; tmp1.lastname[i] != '\0'; i++)
		count++;
	lastname = new char[count];
	for (int i = 0; i < count; i++)
		lastname[i] = tmp1.lastname[i];
	lastname[count] = '\0';
	gpa = tmp1.gpa;
}
Student::Student(int ids, const char *tmp, const char *tmp1)//auto gpa=0
{
	id = ids;
	int count = 0;
	for (int i = 0; tmp[i] != '\0'; i++)
		count++;
	firstname = new char[count];
	for (int i = 0; i < count; i++)
		firstname[i] = tmp[i];
	firstname[count] = '\0';
	count = 0;
	for (int i = 0; tmp1[i] != '\0'; i++)
		count++;
	lastname = new char[count];
	for (int i = 0; i < count; i++)
		lastname[i] = tmp1[i];
	lastname[count] = '\0';
	gpa = 0;
}
Student::Student(int ids, const char *tmp, double gpas)
{
	id = ids;
	int count = 0;
	for (int i = 0; tmp[i] != '\0'; i++)
		count++;
	firstname = new char[count];
	lastname = new char[count];
	for (int i = 0; i < count; i++)
	{
		firstname[i] = tmp[i];
		lastname[i] = tmp[i];
	}
	firstname[count] = '\0';
	lastname[count] = '\0';
	gpa = gpas;
}
Student::~Student()
{
	cout << "Destructor!!";
}