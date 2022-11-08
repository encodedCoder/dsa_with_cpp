#include<iostream>
using namespace std;

void printArray(int *nums, int numsLength){
	for (int i = 0; i < numsLength; cout << nums[i++] << " ");
	cout << endl;
}

void swap(int *num1, int *num2){
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void bubbleSort(int *nums, int numsLength){
	bool swapped = true;
	for (int i = 1; i <= numsLength; i++){
		if (swapped){
			swapped = false;
			for (int j = 0; j < numsLength-i; j++){
				if (nums[j] > nums[j+1]){
					swap(&nums[j], &nums[j+1]);
					swapped = true;
				}
			}
		}
	}
}

int main() {
	int nums[] = {5,3,9,7,2,8,1};
	int numsLength = sizeof(nums)/sizeof(nums[0]);

	printArray(nums, numsLength);

	bubbleSort(nums, numsLength);

	printArray(nums, numsLength);
	return 0;
}