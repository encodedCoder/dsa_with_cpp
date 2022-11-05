#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int num = 1301;
	// cin >> num;

	bool isPrime = true;
	for (int i = 2; i < num; i++)
		if (num % i == 0){
			isPrime =  false;
			break;
		}

	if (isPrime)
		cout << num << " is a Prime number." << endl;
	else
		cout << num << " not a prime number." << endl;
	return 0;
}
