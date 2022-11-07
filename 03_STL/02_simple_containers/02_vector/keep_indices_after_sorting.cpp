#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> nums = {4,3,9,2,5,6,7};
	vector<pair<int,int>> nums_indices;

	for(int i = 0; i < nums.size(); i++){nums_indices.push_back({nums[i], i});}
	sort(nums_indices.begin(), nums_indices.end());

	for(auto ele : nums_indices){cout << ele.first << ": " << ele.second << endl;}
	return 0;
}
