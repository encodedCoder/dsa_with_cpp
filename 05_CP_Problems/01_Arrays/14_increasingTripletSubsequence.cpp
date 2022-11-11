#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
    	for(int i = 0; i < nums.size()-2; i++) {
				// 
    	}
    	return false;	
    }
};

int main(int argc, char const *argv[])
{
	vector<int> nums{1,5,0,4,1,3};

	Solution obj;
	cout << obj.increasingTriplet(nums) << endl;

	return 0;
}