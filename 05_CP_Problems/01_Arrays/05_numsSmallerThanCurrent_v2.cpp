class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    	// create the array of size 100 because input range is [0, 100]
    	vector<int> eleCount(101);

    	// maintain the count of elements
    	for(int i = 0; i < nums.size(); ++i){
    		eleCount[nums[i]]++;
    	}

    	// do the cummulative count
    	for (int i = 1; i < eleCount.size(); ++i){
    		eleCount[i] += eleCount[i-1];
    	}

    	// create the result array
    	vector<int> result(nums.size());
    	for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 0){
                result[i] = 0;
            }else {
    		    result[i] = eleCount[nums[i]-1];
            }
    	}
    	
    	return result;
    }
};