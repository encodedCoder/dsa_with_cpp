#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a = 10, b = 25;
	const int *p = &a;
	int const *q = &b;
	p++;
	p = &b;
	// (*p)++;
	return 0;
}
