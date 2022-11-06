#include <iostream>
using namespace std;

class Base{
private:
	int a;
protected:
	int b;
public:
	int c;
	Base(int a = 0, int b = 0, int c = 0){
		this->a = a;
		this->b = b;
		this->c = c;
	}
};
class Derived: public Base{
public:
	void fun(){
		// a = 10; // This member is not accessible upon INHERITANCE becuase this is private member
		b = 20;
		c = 30;
	}
};

int main(int argc, char const *argv[])
{
	Base x;
	// x.a;  // This member is not accessible upon object becuase this is private member
	// x.b;  // This member is not accessible upon object becuase this is protected member
	x.c;
	return 0;
}
