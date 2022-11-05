#include<iostream>
using namespace std;

bool isPrime(int num)
{
	int i = 2;
	while (i*i <= num){
		if (num % i == 0)
			return false;
		i++;
	}
	return true;
}

int main(int argc, char const *argv[])
{
	int num = 13;
	// cin >> num;

	cout << isPrime(num) << endl;
	return 0;
}
