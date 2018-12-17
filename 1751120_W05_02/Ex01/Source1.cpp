#include "Header.h"
int main()
{
	CongTy KMS;
	KMS.nhapdanhsach();
	cout << "Do you want to find an employee,enter a name to find:";
	string tmp;
	cin >> tmp;
	KMS.timnhanvien(tmp);
	KMS.calculatingsumofsalary();
	KMS.countnhanviensinhthang5();
	KMS.soluongNVSX();
	system("pause");
}