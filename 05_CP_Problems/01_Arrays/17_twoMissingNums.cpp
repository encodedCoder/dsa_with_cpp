#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
	vector<int> findTwoMissingNumbers(vector<int> nums) {
		int xor_ = 0;
		for(int i = 1; i <= nums.size()+2; i++) {
			xor_ ^= i;
		}

		for(int i = 0; i < nums.size(); ++i) {
			xor_ ^= nums[i];
		}

		int set_no = (xor_ & ~(xor_-1));

		int num1 = 0;
		int num2 = 0;
		for(int i = 1; i <= nums.size()+2; ++i) {
			if (i & set_no){
				num1 ^= i;
			} else {
				num2 ^= i;
			}
		}

		for(int i = 0;i < nums.size(); ++i) {
			if(nums[i] & set_no){
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
	vector<int> nums{1,3,5,6};
	// vector<int> nums{2,3,5,6};

	Solution obj;
	vector<int> twoMissingNums(obj.findTwoMissingNumbers(nums));

	cout << twoMissingNums[0] << " " << twoMissingNums[1] << endl;
	return 0;
}