#include <iostream>
#include <cstdarg>
using namespace std;

int sum(int n, ...){
	va_list list;
	va_start(list, n);
	int s = 0;
	for (int i = 0; i < n; ++i){
		s += va_arg(list, int);
	}
	va_end(list);
	return s;
}

int main(int argc, char const *argv[])
{
	cout << sum(3,2,5,3) << endl;
	cout << sum(5, 20, 32, 68, 20, 10) << endl;
	return 0;
}
