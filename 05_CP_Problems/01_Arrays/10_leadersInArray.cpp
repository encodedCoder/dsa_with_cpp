#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

vector<int> findLeaders(vector<int> &nums){
	vector<int> leaders;
	int currMax = INT_MIN;
	for(int i = nums.size()-1; i >= 0; i--) {
		if(nums[i] > currMax){
			leaders.push_back(nums[i]);
			currMax = max(nums[i], currMax);
		}
	}
	reverse(leaders.begin(), leaders.end());
	return leaders;
}

int main(int argc, char const *argv[])
{
	vector<int> nums{8,4,2,3,1,5,4,2};
	vector<int> leaders(findLeaders(nums));

	for (auto &element : leaders){
		cout << element << " ";
	}
	return 0;
}