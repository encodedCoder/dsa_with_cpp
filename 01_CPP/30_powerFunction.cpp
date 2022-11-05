#include<iostream>
using namespace std;

int power(int base, int exponent){
	if (exponent == 0){
		return 1;
	}
	return base * power(base, exponent-1);
}

int fastPower(int base, int exponent){
	if (exponent == 0){
		return 1;
	}

	int smallerSolution = fastPower(base, exponent/2);
	smallerSolution *= smallerSolution;

	if (exponent & 1 == 0){
		return smallerSolution;
	}
	else{
		return base*smallerSolution;
	}
}

int main(int argc, char const *argv[])
{
	int base = 2;
	int exponent = 15;

	cout << power(base, exponent) << endl;
	// cout << fastPower(base, exponent) << endl;
	return 0;
}