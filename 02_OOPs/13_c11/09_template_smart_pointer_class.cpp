#include <iostream>
using namespace std;

template <class T>
class SmartPointer{
	T* ptr;
public:
	SmartPointer(T* p = NULL){ptr = p;}
	~SmartPointer(){delete ptr;}
	T& operator*(){return *ptr;}
	T* operator->(){return ptr;}
};

int main(int argc, char const *argv[])
{
	SmartPointer<int> num(new int(5));
	cout << *num << endl;
	return 0;
}
