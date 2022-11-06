#include <iostream>
using namespace std;

class YourClass;

class MyClass{
private:
	int a = 20;
	friend YourClass;
};

class YourClass{
public:
	// MyClass my;
	void fun(){
		MyClass my;
		cout << my.a << endl;
	}
};

int main(int argc, char const *argv[])
{
	YourClass your;
	your.fun();
	return 0;
}
