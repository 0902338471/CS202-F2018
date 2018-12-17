#include <iostream>
#include<string.h>
using namespace std;
class A {
private:
	char *m_s;
public:
	A() { m_s = _strdup("default"); }
	A(char *s) { m_s = s; }
	virtual void prepare() { cout << "A "; }
	friend istream &operator>>(istream &is, A&tmp)
	{
		is.getline(tmp.m_s, 1000, '\n');
		return is;
	}
	void display() {
		prepare();
		cout << m_s << endl;
	}
};
class B : public A {
public:
	B(char *s) : A(s) { }
	B(const B &b) { }
	void prepare() { cout << "B "; }
};
void foo(A *obj1, A obj2) {
	obj1->display();
	obj2.display();
};
int main() {
	char s[] = "text";
	B obj1(s);
	obj1.display();
	cin >> obj1;
	obj1.display();
	system("pause");
}