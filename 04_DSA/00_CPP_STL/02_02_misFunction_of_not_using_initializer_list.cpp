#include <iostream>
using namespace std;

class Test{
public:
	Test(){
		cout << "Default constructor.\n";
	}
	Test(int x){
		cout << "Parameterized constructor.\n";
	}
};

class Main{
private:
	Test t;
public:
	Main() : t(10){

	}
};


int main(int argc, char const *argv[])
{
	Main m;
	return 0;
}