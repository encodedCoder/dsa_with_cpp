#include<iostream>
using namespace std;

void printArray(int *nums, int numsLength){
	for (int i = 0; i < numsLength; cout << nums[i++] << " ");
	cout << endl;
}

void selectionSort(int *nums, int numsLength){
	for (int i = 0; i < numsLength; ++i){
		int max = 0;
		int j = 1;
		for (j = 1; j < numsLength-i; ++j){
			if (nums[max] < nums[j])
				max = j; 
		}
		int temp = nums[max];
		nums[max] = nums[j-1];
		nums[j-1] = temp;
	}
}

int main() {
	int nums[] = {5,3,9,7,2,8,1};
	int numsLength = sizeof(nums)/sizeof(nums[0]);

	printArray(nums, numsLength);

	selectionSort(nums, numsLength);

	printArray(nums, numsLength);
	return 0;
}