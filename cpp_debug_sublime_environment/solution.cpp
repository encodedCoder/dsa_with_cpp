#include "debug.h"

class Solution{
public:
    void prefixSum(vector<int>& nums){
        for(int i = 1; i < nums.size(); i++){
            debug(i);
            debug(nums[i]);
            nums[i] += nums[i-1];
        }
        return;
    }
};
