#include<iostream>
using namespace std;

int linearSearch(int *nums, int numsLength, int key){
	for (int i = 0; i < numsLength; i++){
		if (nums[i] == key) return i;
	}
	return -1;
}

int main() {
	int nums[] = {16,84,63,5,114,67,8,3,7,6,9,11,35,14,65,23};
	int index = linearSearch(nums, sizeof(nums)/sizeof(nums[0]), 650);
	if (index != -1)
		cout << "Element found at " << index <<"." << endl;
	else
		cout << "Element not found." << endl;
	return 0;
}