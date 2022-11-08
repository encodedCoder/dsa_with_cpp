#include <iostream>
using namespace std;

void printArray(int nums[], int numsLength){
	for(int i = 0; i < numsLength; ++i){
		cout << nums[i] << " ";
	}
	cout << endl;
}

void merge(int nums[], int lower, int mid, int upper, int *auxSpace) {
	// copy left side of current subarray
	for (int i = lower; i <= mid; ++i){
		auxSpace[i] = nums[i]; 
	}
	// copy right side of current subarray
	for (int i = mid+1; i <= upper; ++i){
		auxSpace[i] = nums[i];
	}

	int i = lower;
	int j = mid+1;
	int k = lower;

	while (i <= mid and j <= upper){
		if (auxSpace[i] <= auxSpace[j]){
			nums[k++] = auxSpace[i++];
		}
		else{
			nums[k++] = auxSpace[j++];
		}
	}

	while (i <= mid){
		nums[k++] = auxSpace[i++];
	}

	while(j <= upper){
		nums[k++] = auxSpace[j++];
	}
}

void mergeSort(int nums[], int lower, int upper, int *auxSpace){
	if (lower < upper) {
		int mid = (lower + upper) / 2;
		mergeSort(nums, lower, mid, auxSpace);
		mergeSort(nums, mid+1, upper, auxSpace);
		merge(nums, lower, mid, upper, auxSpace);
	}
}	

int main(int argc, char const *argv[])
{
	int nums[] = {5,7,3,9,1,5,2,8,6,4};
	int *auxSpace = new int(sizeof(nums)/sizeof(nums[0]));
	printArray(nums, sizeof(nums)/sizeof(nums[0]));
	mergeSort(nums, 0, sizeof(nums)/sizeof(nums[0]) - 1, auxSpace);
	printArray(nums, sizeof(nums)/sizeof(nums[0]));
	return 0;
}