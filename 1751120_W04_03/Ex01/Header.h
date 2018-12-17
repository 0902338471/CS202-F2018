#ifndef _Ex01_
#define _Ex01_
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
	friend istream &operator>>(istream &is,  DOB&tmp);
	friend ostream &operator<<(ostream &os, const DOB&tmp);
	void operator=(const DOB&tmp)
	{
		day = tmp.day;
		month = tmp.month;
		year = tmp.year;
	}
private:
	int day;
	int month;
	int year;
};
class nhanvien {
public:
	nhanvien(int IDS, string hotens, DOB its, string diachis);
	nhanvien(string hotens, DOB its, string diachis);//default IDS=0
	nhanvien(int IDS, string hotens, DOB its);//default diachis=" "
	nhanvien(int IDS, string hotens, string diachis);//default DOB=1/1/1
	nhanvien();//default constructor
	nhanvien(const nhanvien&tmp);//copy constructor
	void printout();
private:
	int ID;
	string hoten;
	DOB it;
	string diachi;
};
class NVSX :public nhanvien {
public:
	NVSX(int IDS, string hotens, DOB its, string diachis,int sosanphams) :nhanvien(IDS, hotens, its, diachis) {
		sosanpham = sosanphams;
	}
	NVSX(const NVSX&tmp) :nhanvien(tmp)
	{
		sosanpham = tmp.sosanpham;
	}
	NVSX()
	{
		sosanpham = 0;
	}//default constructor
	NVSX(const nhanvien&tmp):nhanvien(tmp)
	{
		sosanpham = 0;
	}
	NVSX(int sosanphams)
	{
		sosanpham = sosanphams;
	}
	void printout()
	{
		nhanvien::printout();
		cout << "So san pham:" << sosanpham << endl;
	}
	int tinhluong()
	{
		return sosanpham * 20000;
	}
private:
	int sosanpham;
};	
class NVCN :public nhanvien {
public:
	NVCN(int IDS, string hotens, DOB its, string diachis, int songays) :nhanvien(IDS, hotens, its, diachis)
	{
		songay = songays;
	}
	NVCN(const NVCN&tmp) :nhanvien(tmp)
	{
		songay = tmp.songay;
	}
	NVCN()//default constructor
	{
		songay = 0;
	}
	NVCN(const nhanvien&tmp, int songays) :nhanvien(tmp)
	{
		songay = songays;
	}
	NVCN(const nhanvien&tmp) :nhanvien(tmp)
	{
		songay = 0;
	}
	void printout()
	{
		nhanvien::printout();
		cout << "So ngay:" << songay << endl;
	}
	int tinhluong()
	{
		return songay * 300000;
	}
private:
	int songay;
};
#endif