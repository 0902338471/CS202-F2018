#ifndef _Ex02_
#define _Ex02_
#include <iostream>
using namespace std;
class HoangTu {
public:
	HoangTu() = default;
	HoangTu(int moneys, int intels, int strengths)
	{
		money = moneys;
		intel = intels;
		strength = strengths;
	}
	void input()
	{
		cout << "Enter money :";
		cin >> money;
		cout << "Enter intelligent value:";
		cin >> intel;
		cout << "Enter strength value:";
		cin >> strength;
	}
	void output()
	{
		cout << "Remaining money:" << money << endl;
		cout << "Remaining intelligent value:" << intel << endl;
		cout << "Remaining strength value:" << strength << endl;
	}
private:
	int money;
	int intel;
	int strength;
	friend class BusinessGate;
	friend class AcademicGate;
	friend class PowerGate;
};
class Gate {
public:
	virtual void input() = 0;
	virtual void output() = 0;
	virtual bool Pass(HoangTu&tmp) = 0;
private:
};
class BusinessGate:public Gate {
public:
	void input();
	void output()
	{
		cout << "Number of goods:" << Numofgoods << endl;
		cout << "Price of each goods:" << price << endl;
	}
	bool Pass( HoangTu&tmp)
	{
		if (tmp.money >= price*Numofgoods)
		{
			tmp.money -= price * Numofgoods;
			return true;
		}
		return false;
	}
private:
	int price;
	int Numofgoods;
};
class AcademicGate :public Gate {
public:
	void input()
	{
		cout << "Enter intelligent value of this gate:";
		cin >> Ask;
	}
	void output()
	{
		cout << "Intelligent value of this gate:" << Ask << endl;
	}
	bool Pass(HoangTu &tmp)
	{
		if (tmp.intel >= Ask)
			return true;
		return false;
	}
private:
	int Ask;
}; 
class PowerGate :public Gate {
public:
	void input()
	{
		cout << "Enter required strength of this gate:";
		cin >> ReStrength;
	}
	void output()
	{
		cout << "Required strength of this gate:" << ReStrength << endl;
	}
    bool Pass(HoangTu &tmp)
	{
		if (tmp.strength >= ReStrength)
		{
			tmp.strength -= ReStrength;
			return true;
		}
		return false;
	}
private:
	int ReStrength;
};
#endif