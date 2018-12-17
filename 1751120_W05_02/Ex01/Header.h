#ifndef _Ex01_
#define _Ex01_
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class DOB {
public:
	DOB()
	{
		day = 1;
		month = 1;
		year = 1;
	}
	friend istream &operator>>(istream &is, DOB&tmp);
	friend ostream &operator<<(ostream &os, const DOB&tmp);
	void operator=(const DOB&tmp)
	{
		day = tmp.day;
		month = tmp.month;
		year = tmp.year;
	}
	bool sinhthang5()
	{
		if (month == 5)
			return true;
		return false;
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
	virtual void input()
	{
		cout << "ID:";
		cin >> ID;
		cout << "Ho ten: ";
		cin.ignore(1);
		getline(cin, hoten);
		cout << "Dia chi: ";
		getline(cin, diachi);
		cout << "Ngay sinh:";
		cin >> it;
	}
	virtual void printout();
	virtual int tinhluong()
	{
		return 0;
	}
	virtual void findandprint(string tmp)
	{
		if (tmp == hoten)
		{
			cout << "FOUND!!" << endl;
			printout();
		}
	}
	virtual bool sinhthang5() {
		if (it.sinhthang5())
			return true;
		return false;
	}
private:
	int ID;
	string hoten;
	DOB it;
	string diachi;
};
class NVSX :public nhanvien {
public:
	NVSX(int IDS, string hotens, DOB its, string diachis, int sosanphams) :nhanvien(IDS, hotens, its, diachis) {
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
	NVSX(const nhanvien&tmp) :nhanvien(tmp)
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
	void input()
	{
		nhanvien::input();
		cout << "So San pham:";
		cin >> sosanpham;
	}
	void findandprint(string tmp)
	{
		nhanvien::findandprint(tmp);
	}
	bool sinhthang5()
	{
		return (nhanvien::sinhthang5());
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
	void input()
	{
		nhanvien::input();
		cout << "So ngay:";
		cin >> songay;
	}
	void findandprint(string tmp)
	{
		nhanvien::findandprint(tmp);
	}
	bool sinhthang5()
	{
		return(nhanvien::sinhthang5());
	}
private:
	int songay;
};
class CongTy
{
public:
	CongTy()
	{
		NVSXcount = 0;
		NVCNcount = 0;
		n = 0;
	}
	void nhapdanhsach()
	{
		cout << "So luong nhan vien cua cong ty:";
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cout << "Nhan vien thu " << i + 1 << endl;
			nhanvien *tmp;
			cout << "1.Nhan vien san xuat" << endl << "2.Nhan vien cong nhat" << endl;
			cout << "Chon loai nhan vien:";
			int key;
			cin >> key;
			if (key == 1)
			{
				tmp = new NVSX;
				NVSXcount++;
				tmp->input();
				p.push_back(tmp);
			}
			else
			{
				tmp = new NVCN;
				NVCNcount++;
				tmp->input();
				p.push_back(tmp);
			}
		}
	}
	void calculatingsumofsalary()
	{
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += p[i]->tinhluong();
		}
		cout << "Tong luong cua nhan vien:" << sum;
	}
	void soluongNVSX()
	{
		cout << "Co " << NVSXcount << " NVSX trong cong ty.";
	}
	void timnhanvien(string tmp)
	{
		for (int i = 0; i < n; i++)
		{
			p[i]->findandprint(tmp);
		}
	}
	void countnhanviensinhthang5()
	{
		cout << endl;
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			if (p[i]->sinhthang5())
				count++;
		}
		cout << "Co " << count << " nhan vien sinh thang 5!" << endl;
	}
private:
	vector<nhanvien*> p;
	int n;
	int NVSXcount;
	int NVCNcount;
};
#endif
