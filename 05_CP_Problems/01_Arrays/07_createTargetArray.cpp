class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target;
        for(int i = 0; i < nums.size(); ++i) {
            if (index[i] > target.size()-1){
                target.push_back(nums[i]);
            }else {
                target.insert(nums.begin() + index[i], nums[i]);
            }
        }
        return target;
    }
};