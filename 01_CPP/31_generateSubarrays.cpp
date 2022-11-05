#include <iostream>
using namespace std;

void print_subarrays(int arr[], int arr_length){
	int count = 0;
	for (int currSize = 1; currSize <= arr_length; ++currSize) {
		int currSubarrays = arr_length+1 - currSize;
		int i = 0, k = 0;
		cout << "================" << endl;
		while (currSubarrays){
			int j = 0;
			while (j < currSize) {
				cout << arr[i++] << " ";
				j++;
			}
			count++;
			i = ++k;
			cout << endl;
			currSubarrays--;
		}
	}

	cout << count << endl;

}

int main(int argc, char const *argv[])
{
	int arr[] = {2,3,8,4,6,7,9,1,5};
	// int arr[] = {2,3,8,4};


	print_subarrays(arr, end(arr)-begin(arr));
	return 0;
}