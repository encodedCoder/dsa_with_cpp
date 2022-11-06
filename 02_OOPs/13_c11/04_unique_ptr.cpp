#include <iostream>
#include <memory>
using namespace std;

int main(int argc, char const *argv[])
{
	unique_ptr<int> num1(new int);
	*num1 = 10;
	cout << *num1 << endl;
	unique_ptr<int> num2 = move(num1);
	cout << *num2 << endl;
	return 0;
}
