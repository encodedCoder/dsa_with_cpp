#include <iostream>
using namespace std;

void printArray(int arr[], int size){
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}


class Solution{
private:
	int partition (int arr[], int low, int high){
		#include <time.h>
		srand(time(0));
		int pivot = (rand() % (high - low + 1)) + low;
		swap(arr[pivot], arr[high]);
		pivot = high;
		int i = low, j = i-1;
		for(; i < high; i++){
			if(arr[i] < arr[pivot]) swap(arr[i], arr[++j]);
		}
		swap(arr[pivot], arr[++j]);
		return j;
	}
	void swap(int &num1, int &num2){int temp = num1; num1 = num2; num2 = temp;}
public:
	//Function to sort an array using quick sort algorithm.
	void quickSort(int arr[], int low, int high){
		if (low < high) {
			int mid = partition(arr, low, high);
			quickSort(arr, low, mid-1);
			quickSort(arr, mid+1, high);
		}
	}
};

int main(){
	int n = 8, arr[] = {20, 69, 8, 21, 36, 57, 12, 42};
	Solution obj;
	obj.quickSort(arr, 0, n-1);
	printArray(arr, n);
	return 0;
}  