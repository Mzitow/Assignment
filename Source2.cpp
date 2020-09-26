#include <iostream>


using namespace std;

int x = 3, y = 1;
class A {

	
public:
	A() {
		x *= 2;
	}

	int f() { return 2; }
	int g() { return 1; }
};


class B : public A {

public:
	B() {
		y *= 3;
	}

	int f() { return 3; }
	virtual int g() { return 4; }
};


class C : public B{

public:
	int z;
	C() {z = 0;}

	C(int s) { z = s; }

	C(int a, int b) { z = 3 * a % 2 + b; }
	
	int g() { return 5; }
};
int main()
{
	
	A* pa;
	A a;
	B b;
	C c;
	C c1(4);
	C c2(2, 6);
	
	pa = &a;

	cout << pa->f() << endl;
	cout << pa->g() << endl;

	pa = &b;

	cout << pa->f() << endl;
	cout << pa->g() << endl;

	pa = &c;

	cout << pa->f() << endl;
	cout << pa->g() << endl;

	cout << "\n With c z : " << c.z << endl;
	cout << "\n With c1 z : " << c1.z << endl;
	cout << "\n With c2 z : " << c2.z << endl;

	return 0;
}
