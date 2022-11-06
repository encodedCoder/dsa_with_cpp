#include <iostream>
using namespace std;

template <class type>
void print_maximum(type a, type b){
	cout << (a > b ? a : b) << endl;
}

int main(int argc, char const *argv[])
{
	print_maximum(5, 3);
	print_maximum(26.34, 94.21);
	print_maximum("suresh", "sudesh");
	return 0;
}
