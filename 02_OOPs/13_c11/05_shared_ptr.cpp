#include <iostream>
#include <memory>
using namespace std;

int main(int argc, char const *argv[])
{
	shared_ptr<int> num1(new int);
	*num1 = 26;
	cout << *num1 << endl;

	shared_ptr<int> num2;
	num2 = num1;

	cout << *num1 << endl;
	cout << *num2 << endl;
	cout << num1.use_count() << endl;
	cout << num2.use_count() << endl;
	return 0;
}
