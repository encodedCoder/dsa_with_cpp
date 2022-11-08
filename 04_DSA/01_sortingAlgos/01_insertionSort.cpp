#include<iostream>
using namespace std;

void printArray(int *, int);
void insertionSort(int*, int);

void printArray(int *nums, int numsLength){
	for (int i = 0; i < numsLength; cout << nums[i++] << " ");
	cout << endl;
}

void insertionSort(int* nums, int numsLength)
{
	for (int i = 1; i < numsLength; ++i){
		int key = nums[i];
		int j = i-1;
		while (j >= 0 and nums[j] > key){
			nums[j+1] = nums[j];
			--j;
		}
		nums[j+1] = key;
	} 
}


int main(int argc, char const *argv[])
{ 
	int nums[] = {5,3,9,7,2,8,1};
	int numsLength = sizeof(nums)/sizeof(nums[0]);

	printArray(nums, numsLength);

	insertionSort(nums, numsLength);

	printArray(nums, numsLength);
	return 0;
}