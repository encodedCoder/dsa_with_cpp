//Check is number is divisible by 2 or 3 or both.

#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	int num;

	cin >> num;

	if (num % 2 == 0)
		if (num % 3 == 0)
			cout << num << " is divisible by both 2 and 3." << endl;
		else
			cout<< num <<  " is divisible by 2 only." << endl;
	else if (num % 3 == 0)
		cout << num <<  " is divisible by 3 only." << endl;
	else
		cout << num << " is divisible by niether." << endl;

	return 0;
}
