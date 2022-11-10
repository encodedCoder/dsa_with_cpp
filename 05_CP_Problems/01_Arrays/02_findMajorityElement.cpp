// By using "Boyer Moore Algorithm"

class Solution {
public:
	int majorityElement(vector<int>& nums) {
		int count = 0;
		int majority = nums[0];
		for (int i = 1; i < nums.size(); ++i) {
			if (count == 0){
				count++;
				majority = nums[i];
			}else if(majority == nums[i]) {
				count++;
			}else{
				count--;
			}
		}
		return majority;
	}
};

// nums = [1, 1, 2, 2, 2, 2, 2, 3, 5, 6, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8]
