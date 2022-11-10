class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    	int n = nums.size();
    	if (k >= n){
    		k = k % n;
    	}

    	if (k != 0){
			reverse(nums.begin(), nums.begin() + (n-k));
			reverse(nums.begin() + (n-k), nums.end());
			reverse(nums.begin(), nums.end());
    	}
    }
};