#include <iostream>
using namespace std;

int add(const int &num1, const int &num2){
	return num1 + num2;
}

int main(int argc, char const *argv[])
{
	cout << add(45, 63) << endl;
	return 0;
}
