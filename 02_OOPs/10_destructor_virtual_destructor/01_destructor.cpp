#include <iostream>
#include <fstream>
using namespace std;


class Test{
	int *nums;
public:
	Test(){
		nums = new int[10];
	}
	~Test(){
		delete []nums;
	}
};

int main(int argc, char const *argv[])
{
	Test t;

	{
		Test *t = new Test();
		delete t;
	}

	cout << "bye" << endl;
	return 0;
}
