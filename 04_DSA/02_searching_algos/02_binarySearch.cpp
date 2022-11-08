#include<iostream>
using namespace std;

int binarySearch(int *nums, int lower, int upper, int key){
	if (lower <= upper){
		int middle = (lower + upper) / 2;
		if (nums[middle] == key)
			return middle;
		else if (nums[middle] > key)
			return binarySearch(nums, lower, middle-1, key);
		else
			return binarySearch(nums, middle+1, upper, key);
	}
	return -1;
}

int main(int argc, char const *argv[])
{
	int nums[] = {2,5,6,8,15,19,25,27,35,38,45,56,66,71,90};
	int key = 270;
	
	int lower = 0;
	int upper = sizeof(nums)/sizeof(nums[0])-1;

	int index = binarySearch(nums, lower, upper, key);
	if (index != -1)
		cout << "Element found at index " << index << "." <<endl;
	else
		cout << "Element not found." << endl;
	return 0;
}