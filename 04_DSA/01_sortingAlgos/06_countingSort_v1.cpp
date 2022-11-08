#include <iostream>
#include <algorithm>
using namespace std;

void printArray(int nums[], int numsLength){
	for(int i = 0; i < numsLength; ++i){
		cout << nums[i] << " ";
	}
	cout << endl;
}

void countingSort(int nums[], int numsLength){
	int range = *max_element(nums, nums + numsLength);
	int eleCount[range+1] = {0};

	// maintain the count of elements
	for (int i = 0; i < numsLength; ++i) {
		eleCount[nums[i]]++;
	}

	// update eleCount to cumulative count
	for (int i = 1; i < sizeof(eleCount)/sizeof(eleCount[0]); ++i) {
		eleCount[i] += eleCount[i-1];
	}

	// do the actual sorting now
	int result[numsLength] = {0};
	for (int i = numsLength-1; i >= 0; --i) {
		result[eleCount[nums[i]]-1] = nums[i];
		eleCount[nums[i]]--;
	}

	// copy result to original array
	for (int i = 0; i < numsLength; ++i) {
		nums[i] = result[i];
	}

}

int main(int argc, char const *argv[])
{
	int nums[] = {4,2,2,5,3,3,1};
	int numsLength = end(nums)-begin(nums);

	printArray(nums, numsLength);
	countingSort(nums, numsLength);
	printArray(nums, numsLength);
	return 0;
}
