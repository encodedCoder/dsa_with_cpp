#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public:
	bool find3Numbers(int nums[], int n, int X){
		if (n < 3) return 0;
		sort(nums, nums+n);
		for (int i = 0; i < n; i++)cout << nums[i] << ", "; cout << endl;

		for(int i = 0; i < n; ++i){
			int l = i+1, r = n-1;
			while (l<r){
				int currSum = nums[i]+nums[l]+nums[r];
				if(currSum == X) return true;
				else if(currSum < X) l++;
				else r--;
			}
		}
		return false;
	}
};

int main(){
	// int n = 6, X = 13, nums[] = {1, 4, 45, 6, 10, 8};
	int n = 5, X = 10, nums[] = {1, 2, 4, 3, 6};

	Solution obj;
	cout << obj.find3Numbers(nums, n, X) << endl;

	return 0;
}