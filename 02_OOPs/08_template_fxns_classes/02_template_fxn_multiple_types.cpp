#include <iostream>
using namespace std;

template <class type1, class type2>
void print_sum(type1 var1, type2 var2){
	cout << var1 + var2 << endl;
}

int main(int argc, char const *argv[])
{
	print_sum(5, 6.3);
	print_sum(4.12, 32.15);
	print_sum(87, 63);
	print_sum(68.32, 21);
	string s1("this is "), s2("suresh");
	print_sum(s1, s2);
	return 0;
}
