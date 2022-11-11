#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, curr = 0, up = nums.size()-1;
        while (curr <= up){
            switch(nums[curr]){
                case 0:
                    if (nums[low] == 0) {
                        low++;
                        curr++; 
                    } else {
                        swap(nums[curr], nums[low++]);
                    }
                    break;
                case 1:
                    curr++;
                    break;
                case 2:
                    swap(nums[up--], nums[curr]);
                    break;
            }
        }

        for (auto &element: nums) {
            cout << element << " ";
        } cout << endl;
    }
};

int main(int argc, char const *argv[])
{
    // vector<int> nums{2,0,2,1,1,0};
    vector<int> nums{2,0,1};
    // vector<int> nums{1,2,1};


    Solution obj;
    obj.sortColors(nums);
    return 0;
}