class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    	// create copy of original array
    	vector<int> numsCopy(nums);

    	// sort the copied array
    	sort(numsCopy.begin(), numsCopy.end());

    	// create the hashmap for elemenst and indices
    	unordered_map<int, int> mapp;
    	for (int i = 0; i < numsCopy.size(); ++i) {
    		if(mapp.find(numsCopy[i]) == mapp.end()){
    			mapp[numsCopy[i]] = i;
    		}
    	}

    	// create the result array
    	vector<int> result(nums.size());
    	for (int i = 0; i < nums.size(); ++i) {
    		result[i] = mapp[nums[i]];
    	}

    	return result;
    }
};