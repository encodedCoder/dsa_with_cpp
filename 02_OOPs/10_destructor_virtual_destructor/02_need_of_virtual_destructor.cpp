#include <iostream>
using namespace std;

class Base{
public:
	Base(){
		cout << "Base Constructor" << endl;
	}
	~Base(){
		cout << "Base Destructor" << endl;
	}
};

class Derived: public Base{
public:
	Derived(){
		cout << "Derived Constructor" << endl;
	}
	~Derived(){
		cout << "Derived Destructor" << endl;
	}
};

int main(int argc, char const *argv[])
{
	Base *p = new Derived;
	delete p;
	return 0;
}
