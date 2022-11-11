#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        int currMax = -1;
        for(auto it = nums.begin(); it < nums.end()-2; ++it) {
            currMax = max(currMax, *it);
            if(currMax > *(it+2)){
                return false;
            }
        }
        return true;
    }
};

int main(int argc, char const *argv[])
{
	// vector<int> nums{1,0,2};
	// vector<int> nums{1,2,0};
	// vector<int> nums{0,1,2};
	// vector<int> nums{1,0};
	// vector<int> nums{0,1};
	vector<int> nums{0};
	// vector<int> nums{2,1,0};
	// vector<int> nums{0,2,1};

    Solution obj;
    cout << obj.isIdealPermutation(nums) << endl;

    // for (auto &element : nums) {
    // 	cout << element << " ";
    // } cout << endl;
    return 0;
}
