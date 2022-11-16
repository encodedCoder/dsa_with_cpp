#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> result;
        for (int i = 0; i < nums.size(); i+=2) {
        	int freq = nums[i];
        	int val = nums[i+1];
        	while(freq--) {
        		result.push_back(val);
        	}
        }
        return result; 
    }
};

int main(int argc, char const *argv[])
{
	vector<int> nums{1,2,3,4};

	Solution obj;
	vector<int> decompressedRunLength(obj.decompressRLElist(nums));

	for(const auto& num : decompressedRunLength) {
		cout << num << " " ;
	} cout << endl;

	return 0;
}