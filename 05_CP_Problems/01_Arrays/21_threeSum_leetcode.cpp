#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		if (nums.size() < 3) return {};
		sort(nums.begin(), nums.end());

		vector<vector<int>> result;
		for(int i = 0; i < nums.size(); ++i){
			if(i > 0 and nums[i] == nums[i-1]) continue;
			int l = i+1;
			int r = nums.size()-1;
			while (l<r){
				if(l > i+1 and nums[l] == nums[l-1]) {l++; continue;}
				int currSum = nums[i]+nums[l]+nums[r];
				if(currSum == 0) result.push_back({nums[i],nums[l++],nums[r--]});
				else if(currSum < 0) l++;
				else r--;
			}
		}
		return result;
	}
};

int main(int argc, char const *argv[])
{
	vector<int> nums{-1,0,1,2,-1,-4};
	// vector<int> nums{};
	// vector<int> nums{0};
	// vector<int> nums{-2,0,0,2,2};

	Solution obj;
	for(auto& triplet:obj.threeSum(nums)){
		for(auto& ele:triplet){
			cout << ele << ", ";
		} cout << endl;
	}

	return 0;
}