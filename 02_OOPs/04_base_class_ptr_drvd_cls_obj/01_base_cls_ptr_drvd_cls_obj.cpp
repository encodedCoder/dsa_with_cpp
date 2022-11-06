#include <iostream>
using namespace std;

class Base{
public:
	void fun1(){}
	void fun2(){}
	void fun3(){}
};
class Derived:public Base{
public:
	void fun4(){}
	void fun5(){}
};

int main(int argc, char const *argv[])
{
	Base *p = new Derived();
	p->fun1();
	p->fun2();
	p->fun3();
	// p->fun4(); // This line will give compiler error: Base class has no member named 'fun4';
	return 0;
}
