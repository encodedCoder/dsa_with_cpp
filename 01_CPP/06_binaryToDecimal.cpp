#include<iostream>
#include<cmath>
using namespace std;

int binaryToDecimal(int binaryNum)
{
	int decimalNum = 0;
	int power = 0;
	int currentBit;
	while (binaryNum)
	{
		currentBit = binaryNum%10;
		if (currentBit)
		{
			decimalNum += currentBit * pow(2, power);
		}
		++power;
		binaryNum /= 10;
	}
	return decimalNum;
}

int main(int argc, char const *argv[])
{

	int nums = 20;;
	// cin >> nums;

	// int currNum;
	// while (nums)
	// {
	// 	cin >> currNum;
		cout << binaryToDecimal(nums) << endl;
		// --nums;
	// }
	return 0;
}