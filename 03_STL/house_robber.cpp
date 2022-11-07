#include <iostream>
#include <vector>
using namespace std;

class Solution {
    vector<int> maxProfits;
    vector<bool> calculated;
    int robHelper(vector<int>& nums, int i){
        if(i >= nums.size()) return 0;
        if(calculated[i]) return maxProfits[i];
        int profitByIncludingNum = nums[i] + robHelper(nums, i+2);
        int profitByExcludingNum = robHelper(nums, i+1);
        int profit = max(profitByIncludingNum, profitByExcludingNum);
        calculated[i] = true;
        maxProfits[i] = profit;
        return profit;
    }
public:
    Solution(){
        maxProfits.resize(101);
        fill(maxProfits.begin(), maxProfits.end(), 0);
        calculated.resize(101);
        fill(calculated.begin(), calculated.end(), false);
    }
    int rob(vector<int>& nums) {
        return robHelper(nums, 0);
    }
};

// class Solution {
//     int robHelper(vector<int>& nums, int i){
//         if(i >= nums.size()) return 0;
//         int profitByIncludingNum = nums[i] + robHelper(nums, i+2);
//         int profitByExcludingNum = robHelper(nums, i+1);
//         return max(profitByIncludingNum, profitByExcludingNum);
//     }
// public:
//     int rob(vector<int>& nums) {
//         return robHelper(nums, 0);
//     }
// };

int main(int argc, char const *argv[]){

    // vector<int> nums{1,2,3,1};

    // vector<int> nums{104,209,137,52,158,67,213,86,141,110,151,127,238,147,169,138,240,185,246,225,147,203,83,83,131,227,54,78,165,180,214,151,111,161,233,147,124,143};

    vector<int> nums{64,316,329,5,26,218,324,20,265,384,79,72,387,187,354,45,20,149,14,272,168,191,374,35,143,118,304,51,222,291,150,153,326,326,47,130,235,143,345,11,238,197,142,325,387,379,180,243,209,366,108,374,51,202,236,238,292,217,90,175,264,165,132,357,145,351,81,164,384,329,355,276,86,308,106,189,74,283,316,13,248,167,164,18,356,150,333,184,343,319,34,28,3,253,351,390,16,311,230,6};

    int n = 3;

    // Create a vector of size n with
    // all values as 10.
    vector<int> vect(n, 10);

    Solution obj;
    cout << obj.rob(nums) << endl;

    return 0;
}
