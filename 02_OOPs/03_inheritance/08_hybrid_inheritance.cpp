#include <iostream>
using std::cout;
using std::endl;
using std::string;

int count = 0;

class A{
public:
	A(){
		count++;
	}
	void print(){
		cout << "print() function called" << endl;
	}
};

class B: virtual public A{
public:
	B(){
		count++;
	}
};

class C: virtual public A{
public:
	C(){
		count++;
	}
};

class D: public B, public C{
public:
	D(){
		count++;
	}
};

int main(int argc, char const *argv[])
{
	D d;
	cout << count << endl;
	// d.print();
	return 0;
}
