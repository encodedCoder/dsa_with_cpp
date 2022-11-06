#include <iostream>
using namespace std;

class Test{
	int t;
public:
	Test(){cout << "Default constructor" << endl;}
	Test(int x){t = x; cout << "Parameterized constructor" << endl;}
};

class Main{
	Test t;
public:
	Main():t(10){}
};

int main(int argc, char const *argv[])
{
	Main m;
	return 0;
}
