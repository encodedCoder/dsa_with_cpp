#include <iostream>
using namespace std;

int factorial(int num){
	if (num > 1){
		return num * factorial(num-1);
	}
	return 1;
}


int main(int argc, char const *argv[])
{
	int num = 5;
	cout << factorial(num) << endl;
	return 0;
}