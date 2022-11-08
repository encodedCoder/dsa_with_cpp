#include <iostream> 
using namespace std;

class Test{
private:
	int x;
public:
	Test(int x1) : x(x1) { cout << "Constructed - " << x << endl;}
	~Test() { cout << "Destructed -  " << x << endl;}
};

int main(int argc, char const *argv[])
{
	Test t1(10);
	Test t2(20);
	return 0;
}