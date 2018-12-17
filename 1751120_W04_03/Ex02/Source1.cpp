#include "Header.h"
Staff::Staff()
{
	name = "";
	age = 0;
	base = 0;
	paper = 0;
	project = 0;
}
Staff::Staff(const Staff&tmp)
{
	name = tmp.name;
	age = tmp.age;
	base = tmp.base;
	paper = tmp.paper;
	project = tmp.project;
}
Staff::Staff(string names, int ages, DOB owns, int bases, int papers, int projects)
{
	name = names;
	age = ages;
	own = owns;
	base = bases;
	paper = papers;
	project = projects;
}
Staff::Staff(int bases, int papers, int projects)
{
	name = "";
	age = 0;
	base = bases;
	paper = papers;
	project = projects;
}
Staff::Staff(string names, int ages, DOB owns)
{

	name = names;
	age = ages;
	own = owns;
	base = 0;
	paper = 0;
	project = 0;
}