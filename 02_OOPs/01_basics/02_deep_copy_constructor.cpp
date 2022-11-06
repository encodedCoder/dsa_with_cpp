#include <iostream>
using namespace std;

class Test{
public:
	int a = 10;
	int *p;
	Test(int a){
		this->a = a;
		this->p = new int[5];
	}
	Test(Test &test){
		this->a = test.a;
		this->p = new int[test.a];
	}
};

int main(int argc, char const *argv[])
{
	Test t1(5), t2(t1);
	t1.p[5] = 56;
	t2.p[5] = 15;

	cout << t1.p[5] << endl;
	cout << t2.p[5] << endl;

	return 0;
}
