#include "Header.h"
ofstream fout;
CItem::CItem(string tmpname)
{
	name = tmpname;
	isHidden = false;
}
CLogger* CLogger::mem = NULL;
CLogger::CLogger()
{
	fout.open("log.txt");
}
CLogger::~CLogger()
{

}
CLogger *CLogger::getLogger()
{
	if (mem == NULL)
		mem = new CLogger;
	return mem;
}
void CLogger::addmethod(string source,string dest)
{
	fout << "Adding file " << source << " to " <<  dest << endl;
}
void CLogger::removemethod(string source, string dest)
{
	fout << "Removing file " << source << " from " << dest << endl;
}
void CLogger::setHiddenmethod(string file)
{
	fout << "Setting file " << file << " Hidden " << endl;
}
void CLogger::setUnhiddenmethod(string file)
{
	fout << "Setting file " << file << " Unhidden" << endl;
}
