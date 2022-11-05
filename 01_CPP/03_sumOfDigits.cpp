#include<iostream>
using namespace std;

int sumOfDigits(int num)
{
	int sum = 0;
	while (num)
	{
		sum += num % 10;
		num /= 10;
	}
	return sum;
}

int main(int argc, char const *argv[])
{
	cout << "Enter an Integer: ";
	int num;
	cin >> num;

	cout << "Sum of digits of " << num << " is: " << sumOfDigits(num) << endl;

	return 0;
}
