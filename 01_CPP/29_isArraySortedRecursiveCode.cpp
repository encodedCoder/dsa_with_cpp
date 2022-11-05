#include<iostream>
using namespace std;

bool isArraySorted(int *arr, int index, int arrLength) {
	if (index < arrLength-1){
		if (arr[index] <= arr[index+1]){
			return true and isArraySorted(arr, index+1, arrLength);
		}
		else{
			return false;
		}
	}
	return true;
}

int main(int argc, char const *argv[])
{
	int nums[] = {1,2,3,4,5,6,7,8,9,4};
	int numsLength = end(nums)-begin(nums);
	int currIndex = 0;

	cout << isArraySorted(nums, currIndex, numsLength) << endl;

	return 0;
}