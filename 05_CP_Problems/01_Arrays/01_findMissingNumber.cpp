class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int result = 0;
        for(int i = 0; i < nums.end()-nums.begin()+1; ++i) {
        	result ^= i;
        }

        for (int i = 0; i < (nums.end()-nums.begin()); ++i){
            result ^= nums[i];
        }
    return result;
    }
};