#ifndef _Ex02_
#define _Ex02_
#include <iostream>
#include <string>
using namespace std;
class IFace{
public:
	virtual void show() = 0;
	virtual IFace* clone() {
		return &(*this);
	};
	virtual ~IFace() {
	}
};
class Face : public IFace {
private:
	string shape;
protected:
	string getShape();
public:
	Face() = default;
	Face(string sh) : shape(sh) {
	}
	virtual void show() {
		cout << "Shape: " << shape << endl;
	}
};
class EyedFace
{
private:
	string shape;
	int eyes;
public:
	static int counts;
	void show()
	{
		cout << "Shape:" << shape << endl;
		cout << "Eyes:" << eyes << endl;
	}
	EyedFace clone()
	{
		return *this;
	}
	EyedFace(string shapes, int eyestmp)
	{
		shape = shapes;
		eyes = eyestmp;
		counts++;
	}
	EyedFace()
	{
		counts++;
	}
	~EyedFace()
	{
		counts--;
	}
};
void testFace(IFace* fc) {
	IFace* a[3] = { fc, fc->clone(), fc->clone() };
	for (int i = 0; i<3; i++) {
		a[i]->show();
	}
	cout << "The same 3 lines ? ";
}
#endif	