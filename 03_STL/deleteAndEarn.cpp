#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        unordered_map<int,int> map, cache;
        int maxNumber = 1;
        for(int num : nums){map[num] += num; maxNumber = max(maxNumber, num);}
        // for(auto p : map){cout << p.first << ':' << p.second << ' ';} cout << endl;

        return 9;
    }
};

int main(int argc, char const *argv[]){

    // vector<int> nums = {1,2,3,4};
    vector<int> nums = {2,2,3,3,3,4};

    Solution obj;
    cout << obj.deleteAndEarn(nums) << endl;

    return 0;
}
