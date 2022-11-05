#include<iostream>
#include<climits>
using namespace std;


int main(int argc, char const *argv[])
{
	int nums[] = {-524, 854, 625, 92154, -5646, 65651, 8721, 531, 35, -5461, -665461, -515155, 255244};

	int numsLen = sizeof(nums)/sizeof(nums[0]);

	int minSoFar = INT_MAX;
	int maxSoFar = INT_MIN;

	for (int i = 0; i < numsLen; i++)
	{
		if (nums[i] < minSoFar)
			minSoFar = nums[i];

		if (nums[i] > maxSoFar)
			maxSoFar = nums[i];
	}

	cout << minSoFar << endl;
	cout << maxSoFar << endl;

	return 0;

}
