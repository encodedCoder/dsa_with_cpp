#include <iostream>
using namespace std;

class Base{
public:
	Base(){cout << "Default of Base" << endl;}
	Base(int x){cout << "Param of Base " << x << endl;}
};
class Derived:public Base{
public:
	Derived(){cout << "Default of Derived" << endl;}
	Derived(int a){cout << "Param of Derived " << a << endl;}
	Derived(int x, int a):Base(x){cout << "Param-2 of Derived " << a << endl;}
};


int main(int argc, char const *argv[])
{
	Derived d1, d2(5), d3(10,16);
	return 0;
}
