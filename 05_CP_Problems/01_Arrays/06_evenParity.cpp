class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
    	int i = -1;
    	for (int j = 0; j < nums.size(); ++j){
    		if (nums[j] % 2 == 1){
    			swap(nums[++i], nums[j])
    		} 
    	}
    	return nums;
    }
};