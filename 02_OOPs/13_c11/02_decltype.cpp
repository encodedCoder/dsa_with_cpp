#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a = 5;

	decltype(a) b = 6.3;

	cout << a << " " << b << endl;
	cout << typeid(a).name() << endl;
	cout << typeid(b).name() << endl;
	return 0;
}
