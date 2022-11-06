#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a = 15;
	int const *const ptr = &a;
	cout << "hello";
	cout << *ptr;

	return 0;
}
