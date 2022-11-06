#include <iostream>
using namespace std;

// This smart pointer class is Integer pointer
class IntegerSmartPointer{
	int *ptr;
public:
	IntegerSmartPointer(int *p = NULL){ptr = p;}
	~IntegerSmartPointer(){delete[] ptr;}
	int& operator*(){return *ptr;}
};

int main(int argc, char const *argv[])
{
	IntegerSmartPointer p(new int[4]);
	*p = 5;
	cout << *p << endl;
	// cout << "bye" << endl;
	return 0;
}
