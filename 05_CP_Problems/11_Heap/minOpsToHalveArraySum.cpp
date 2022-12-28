#include <bits/stdc++.h>
using namespace std;

// O(N + KlogN) Time and O(N) Space --> Max Heap
class Solution {
public:
    int halveArray(vector<int>& nums) {
        double currSum = accumulate(nums.begin(), nums.end(), 0.0);
        double halfSum = currSum/2.0;
        priority_queue<float> pq;
        for(int num: nums) pq.push(num);
        int operationsCount = 0;
        while(currSum > halfSum){
            double currNumHalf = pq.top()/2.0; pq.pop();
            currSum -= currNumHalf;
            pq.push(currNumHalf);
            operationsCount++;
        }
        return operationsCount;
    }
};

int main(int argc, char const *argv[])
{
    Solution obj;
    vector<int> nums = {5,19,8,1};
    cout << obj.halveArray(nums) << endl;
    return 0;
}
