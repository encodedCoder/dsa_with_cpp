#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a = 10;

	auto print_a = [a](){cout << a << endl;};

	print_a();
	a++;
	print_a();

	cout << typeid(print_a).name() << endl;
	cout << typeid(p).name() << endl;

	return 0;
}
