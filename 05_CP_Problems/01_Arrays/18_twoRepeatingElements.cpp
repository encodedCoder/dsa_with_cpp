#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public:
    pair<int, int> twoRepeated(int nums[], int n)
    {
        int xor_ = 0;
        for (int i = 1; i <= n-2; ++i) {
            xor_ ^= i;
        }

        for (int i = 0; i < n; ++i) {
            xor_ ^= nums[i];
        }

        int set_bit = (xor_ & ~(xor_ - 1));

        int num1 = 0;
        int num2 = 0;
        for (int i = 1; i <= n-2; ++i) {
            if (i & set_bit) {
                num1 ^= i;
            } else {
                num2 ^= i;
            }
        }

        for (int i = 0; i < n; ++i) {
            if (nums[i] & set_bit) {
                num1 ^= nums[i];
            } else {
                num2 ^= nums[i];
            }
        }

        return {num1, num2};
    }
};

int main(int argc, char const *argv[])
{
    // int nums[] = {2,4,3,1,2,5,4};
    int nums[] = {1,2,1,3,4,3};
    // int nums[] = {1,2,2,1};
    // int nums[] = {1,1,2,2};

    Solution obj;
    pair<int, int> result = obj.twoRepeated(nums, end(nums)-begin(nums));

    cout << result.first << " " << result.second << endl;
    return 0;
}