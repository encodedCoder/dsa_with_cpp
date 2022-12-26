// https://leetcode.com/problems/jump-game/description/
#include <iostream>
#include <vector>
using namespace std;

// O(N) time and O(N) Space --> DP/Bottom-up
class Solution {
public:
    bool canJump(vector<int>& nums) {
       int n = nums.size();
       vector<bool> can_jump(n);
       can_jump[n-1] = true;
       for(int i = n-2; i >= 0; i--){
            if(nums[i] >= n-i-1){can_jump[i] = true; continue;}
            for(int j = 1; j <= nums[i] and i+j < n; j++){
                if(can_jump[i+j]){
                    can_jump[i] = true;
                    break;
                }
            }
       }
       return can_jump[0];
    }
};

int main(int argc, char const *argv[]){
    vector<int> nums;
    nums = {2,3,1,1,4};
    nums = {3,2,1,0,4};

    Solution obj;
    cout << obj.canJump(nums) << endl;
    return 0;
}
