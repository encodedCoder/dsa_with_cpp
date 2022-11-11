#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size());

        // traverse the input array for left products and store result in output array
        result[0] = 1;
        for (int i = 1; i < nums.size(); i++) {
            result[i] = result[i-1] * nums[i-1];
        }

        // travese the input array for right products and store product in input array
        int i = nums.size()-1;
        int right = nums[i];
        for( --i; i >= 0; i--) {
            result[i] *= right;
            right *= nums[i];
        }

        return result;
    }
};


int main(int argc, char const *argv[])
{
    vector<int> nums = {1, 2, 3, 4};
    // vector<int> nums{0,1};

    for(auto &element : nums) {
        cout << element << " ";
    } cout << endl;

    Solution obj;
    vector<int> result(obj.productExceptSelf(nums));

    for(auto &element : result) {
        cout << element << " ";
    } cout << endl;

    return 0;
}