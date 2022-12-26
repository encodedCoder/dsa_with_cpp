// https://leetcode.com/problems/jump-game/description/
#include <iostream>
#include <vector>
using namespace std;

// O(N^2) Time and O(N) Space --> DP/Bottom-up
class Solution {
public:
    int jump(vector<int>& nums) {
       int n = nums.size();
       vector<int> minJump(n, INT_MAX);
       minJump[n-1] = 0;
       for(int i = n-2; i >= 0; i--){
            if(nums[i] >= n-i-1){minJump[i] = 1; continue;}
            for(int j = 1; j <= nums[i] and i+j < n; j++){
                if(minJump[i+j] == INT_MAX) continue;
                int existingJump = minJump[i];
                int currJump = minJump[i+j]+1;
                minJump[i] = min(existingJump, currJump);
            }
       }
       return minJump[0];
    }
};

int main(int argc, char const *argv[]){
    vector<int> nums;
    nums = {2,3,1,1,4};
    nums = {2,3,0,1,4};

    Solution obj;
    cout << obj.jump(nums) << endl;
    return 0;
}
