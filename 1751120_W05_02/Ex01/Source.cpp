#include "Header.h"
istream& operator>>(istream &is, DOB&tmp)
{
	is >> tmp.day >> tmp.month >> tmp.year;
	return is;
}
nhanvien::nhanvien(int IDS, string hotens, DOB its, string diachis)
{
	ID = IDS;
	hoten = hotens;
	it = its;
	diachi = diachis;
}
nhanvien::nhanvien(string hotens, DOB its, string diachis)//default IDS=0
{
	ID = 0;
	hoten = hoten;
	it = its;
	diachi = diachis;
}
nhanvien::nhanvien(int IDS, string hotens, DOB its)//default diachis=" "
{
	ID = IDS;
	hoten = hotens;
	it = its;
	diachi = " ";
}
nhanvien::nhanvien(int IDS, string hotens, string diachis)//default DOB=1/1/1
{
	ID = IDS;
	hoten = hotens;
	diachi = diachis;
}
nhanvien::nhanvien()//default constructor
{
	ID = 0;
	hoten = " ";
	diachi = " ";
}
nhanvien::nhanvien(const nhanvien&tmp)
{
	ID = tmp.ID;
	hoten = tmp.hoten;
	diachi = tmp.diachi;
	it = tmp.it;
}
void nhanvien::printout()
{
	cout << "ID:" << ID << endl;
	cout << "Ho va Ten:" << hoten << endl;
	cout << "Dia chi:" << diachi << endl;
	cout << "DOB:" << it << endl;
}
ostream &operator<<(ostream &os, const DOB&tmp)
{
	os << tmp.day << "/" << tmp.month << "/" << tmp.year;
	return os;
}