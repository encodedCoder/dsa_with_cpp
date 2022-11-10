#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        if (nums.size() == 1) return 0;

        int lower, upper;
        int min, max;

        // Process the array from left to right
            int i;
            for(i = 0; i < nums.size()-1; i++){
                if(nums[i] > nums[i+1]){
                    lower = i;
                    min = i+1;
                    break;
                }
            }

            if(i == nums.size()-1 and nums[i] >= nums[i-1]) return 0;

            for(i = min; i < nums.size(); ++i) {
                if(nums[i] < nums[min]){
                    min = i;
                }
            }

            for(i = lower; i >= 0; --i) {
                if(nums[i] <= nums[min]){
                    lower = i+1;
                    break;
                }
            }

            if(i == -1 and nums[i+1] > nums[min]) {
                lower = 0;
            }

        // process the array from right to left
            for(i = nums.size()-1; i > 0; --i){
                if(nums[i] < nums[i-1]){
                    upper = i;
                    max = i;
                    break;
                }
            }

            for(i = max; i >= 0; --i) {
                if(nums[i] > nums[max]){
                    max = i;
                }
            }

            for(i = upper; i < nums.size(); ++i) {
                if(nums[i] >= nums[max]){
                    upper = i;
                    break;
                }
            }

            if(i == nums.size() and nums[i-1] < nums[max]){
                upper = nums.size();
            }
            cout << lower << " " << upper << endl;
        return upper - lower;
    }
};

int main() {
    // vector<int> nums{2,6,4,8,10,9,15,1};
    // vector<int> nums{1,3,5,4,2};
    // vector<int> nums{1,2,3,4,5};
    // vector<int> nums{4,2};
    // vector<int> nums{5,6};
    // vector<int> nums{2,3,3,2,4};
    // vector<int> nums{2,3,3,2,4};
    vector<int> nums{3,2,3,2,4};

    Solution sol;

    cout << sol.findUnsortedSubarray(nums) << endl;

    return 0;
}
