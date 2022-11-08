#include <iostream>
using namespace std;

void printArray(int nums[], int numsLength){
	for(int i = 0; i < numsLength; ++i){
		cout << nums[i] << " ";
	}
	cout << endl;
}

void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

int partition(int nums[], int lower, int upper){
	int pivot = upper;

	int j = lower; 
	int i = j-1;

	while (j < upper){
		if (nums[j] < num[pivot]){swap(nums[++i], nums[j]);}
		j++;
	}
	swap(nums[++i], nums[upper]);
	return i;
}

void quickSort(int nums[], int lower, int upper){
	if (lower < upper){
		int index = partition(nums, lower, upper);
		quickSort(nums, lower, index-1);
		quickSort(nums, index+1, upper);

	}
}

int main(int argc, char const *argv[])
{
	int nums[] = {20, 69, 8, 21, 36, 57, 12, 42};
	int numsLength = end(nums)-begin(nums);

	printArray(nums, numsLength);

	quickSort(nums, 0, numsLength-1);
	printArray(nums, numsLength);
	return 0;
}



