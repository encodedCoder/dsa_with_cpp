#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int max_possible_distinct(vector<int> &nums, int k){
	unordered_set<int> s;
	for(const auto& num : nums){s.insert(num);}
	if(s.size() >= nums.size()/k) return nums.size()/k;
	else return s.size();
}

int main(int argc, char const *argv[])
{
	// vector<int> nums{1,1,2,3,1,5,1,2}; int k = 2;
	// vector<int> nums{1,1,2,3,1,5,1,2}; int k = 4;
	vector<int> nums{1,1,2,3,1,2,1,2}; int k = 2;

	cout << max_possible_distinct(nums, k) << endl;

	return 0;
}
