#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	int num = 123456789;
	// cin >> num;

	int reverse = 0;
	while (num){
		reverse = (reverse*10) + (num%10);
		num /= 10;
	}
	cout << reverse;
	return 0;
}
