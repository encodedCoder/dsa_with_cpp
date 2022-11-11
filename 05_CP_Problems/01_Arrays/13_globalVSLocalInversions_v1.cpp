#include <iostream>
#include <vector>
using namespace std;

class Solution {
private:
	int local  = 0;
	int global = 0;
public:
    bool isIdealPermutation(vector<int>& nums) {
    	// count local inversions
    		for(int i = 0; i < nums.size()-1; i++) {
    			if (nums[i] > nums[i+1]){
    				this->local++;
    			}
    		}

    	// count global inversions
    		mergeSort(nums, 0, nums.size()-1);

    	// return the result;
        	return this->local == this->global;
    }

    void mergeSort(vector<int>& nums, int left, int right){
    	if(left < right){
    		int mid = (left + right) / 2;
    		mergeSort(nums, left, mid);
    		mergeSort(nums, mid+1, right);
    		merge(nums, left, mid, right);
    	} 
    }

    void merge(vector<int>& nums, int left, int mid, int right){
    	vector<int> leftArray(nums.begin()+left, nums.begin()+(mid+1));
    	vector<int> rightArray(nums.begin()+(mid+1), nums.begin()+(right+1));

    	int i = 0, j = 0, k = left;
    	while (i < leftArray.size() and j < rightArray.size()){
    		if (leftArray[i] <= rightArray[j]){
    			nums[k++] = leftArray[i++];
    		} else {
    			nums[k++] = rightArray[j++];
    			this->global += (leftArray.size()-i);
    		}
    	} 

    	while (i < leftArray.size()){
    		nums[k++] = leftArray[i++];
    	}

    	while (j < rightArray.size()){
    		nums[k++] = rightArray[j++];
    	}
    }
};

int main(int argc, char const *argv[])
{
	// [0,1,2]
	vector<int> nums{1,0,2};
	// vector<int> nums{1,2,0};
	// vector<int> nums{0,1,2};
	// vector<int> nums{1,0};
	// vector<int> nums{0,1};
	// vector<int> nums{0};
	// vector<int> nums{2,1,0};
	// vector<int> nums{0,2,1};


    Solution obj;
    cout << obj.isIdealPermutation(nums) << endl;

    // for (auto &element : nums) {
    // 	cout << element << " ";
    // } cout << endl;
    return 0;
}
