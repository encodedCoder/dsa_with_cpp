/*
Every number occuring twice except one number. Find this Unique number.
*/

#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	int nums[] = {3,2,3,5,6,5,2};
	int result = 0;

	for (int i = 0; i < sizeof(nums)/sizeof(nums[0]); ++i)
	{
		result ^= nums[i];
	}

	cout << result << endl;
	return 0;
}
