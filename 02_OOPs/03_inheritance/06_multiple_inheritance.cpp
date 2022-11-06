#include <iostream>
#include <math.h>
using namespace std;

class A{
public:
	void fun(){cout << "Hello " << pow(2,8) << endl;}
};
class B:virtual public A{};
class C:virtual public A{};
class D:public B, public C{};

int main(int argc, char const *argv[])
{
	D d;
	d.fun();
	return 0;
}
