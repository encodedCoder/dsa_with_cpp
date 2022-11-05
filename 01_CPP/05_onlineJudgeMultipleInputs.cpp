/*
Print the squares of N numbers. Firts line of input contains N numbers.
And rest following lines contains the numbers whose squares we want to calculate.
*/
#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	int nums;
	cin >> nums;

	int currNum;
	while (nums > 0)
	{
		cin >> currNum;
		cout << currNum * currNum << endl;
		--nums;
	}
}
