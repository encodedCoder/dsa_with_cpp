#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        // if array has only one element
            if (nums.size() == 1){
                if(nums[0] == target){
                    return 0;
                } else {
                    return -1;
                }
            }

        // if array is not rotated
            if (nums[0] < nums[nums.size() - 1]){
                // if element is present
                if (binary_search(nums.begin(), nums.end(), target)){
                    return (lower_bound(nums.begin(), nums.end(), target) - nums.begin());
                } else {
                    return -1;
                }
            }

        // if array is rotated
            int lower = 0, upper = nums.size()-1, mid;
            while (lower <= upper) {
                mid = (lower + upper) / 2;
                if(lower == mid or upper == mid){
                    if (nums[mid] > nums[mid + 1]){
                        break;
                    } else {
                        lower = mid+1;
                    }
                }
                else if(nums[mid] > nums[lower]){
                    if (nums[mid] > nums[mid+1]) {
                        break;
                    } else {
                        lower = mid+1;
                    }
                } else {
                    upper = mid-1;
                }
            }

            cout << nums[mid] << " " << mid << endl;

            if (nums[mid] == target) {
                return mid;
            } 
            else if (target >= nums[0] and target < nums[mid]){
                if (binary_search(nums.begin(), nums.begin()+mid, target)){
                    return (lower_bound(nums.begin(), nums.begin()+mid, target) - nums.begin());
                } else {
                    return -1;
                }
            } 
            else {
                if (binary_search(nums.begin()+(mid+1), nums.end(), target)) {
                    return (lower_bound(nums.begin()+(mid+1), nums.end(), target) - nums.begin());
                } else {
                    return -1;
                }
            }
    }
};


int main() {
    // vector<int> nums{4,5,6,7,0,1,2};
    // int target = 0;

    // vector<int> nums{0,1,2,4,5,6,7};
    // int target = 6;

    // vector<int> nums{1};
    // int target = 1;   

    // vector<int> nums{2, 1};
    // int target = 1;   

    vector<int> nums{4,5,1,2,3};
    int target = 4;

    // vector<int> nums{6,7,1,2,3,4,5};
    // int target = 6;

    Solution sol;
    cout << sol.search(nums, target) << endl;
}