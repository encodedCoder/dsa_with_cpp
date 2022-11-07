#include <iostream>
#include <vector>
#include <sys/time.h>
#include <iomanip>
using namespace std;

class Sort{
public:
	void selectionSort(int arr[], int n){
		for(int i = 0; i < n; i++){
			int max_index = 0, j;
			for(j = 1; j < n-i; j++){
				if(arr[j] > arr[max_index]) max_index = j;
			}
			swap(arr[max_index], arr[--j]);
		}
	}
	void merge(int arr[], int left, int mid, int right){
		vector<int> leftArray(arr+left, arr+mid+1);
		vector<int> rightArray(arr+mid+1, arr+right+1);
		int i = 0, j = 0, k = left;
		while(i < leftArray.size() and j < rightArray.size()){
			if(leftArray[i] < rightArray[j]) arr[k++] = leftArray[i++];
			else arr[k++] = rightArray[j++];
		}
		while(i < leftArray.size()) arr[k++] = leftArray[i++];
		while(j < rightArray.size()) arr[k++] = rightArray[j++];
	}
	void mergeSort(int arr[], int left, int right){
		if(left >= right) return;
		int mid = (right-left)/2 + left;
		mergeSort(arr, left, mid);
		mergeSort(arr, mid+1, right);
		merge(arr, left, mid, right);
	}
};

long getTimeInMicroSeconds(){
	struct timeval start;
	gettimeofday(&start, NULL);
	return start.tv_sec * 1000000 + start.tv_usec;
}

int main(int argc, char const *argv[])
{
	Sort sort; long startTime, endTime;
	cout << "Time taken by Selection Sort and Merge Sort for different inputs is: " << endl;
	cout << setw(10) << "Input size" << setw(15) << "Selection Sort" << setw(15) << "Merge Sort" << endl;
	for(int n = 10; n <= 100000; n *= 10){
		int *arr = new int[n];


		for(int i = 0; i < n; i++){arr[i] = n-i;}
		startTime = getTimeInMicroSeconds();
		sort.selectionSort(arr, n);
		endTime = getTimeInMicroSeconds();
		cout << setw(10) << n << setw(15) << endTime-startTime;


		for(int i = 0; i < n; i++){arr[i] = n-i;}
		startTime = getTimeInMicroSeconds();
		sort.mergeSort(arr, 0, n-1);
		endTime = getTimeInMicroSeconds();
		cout << setw(15) << endTime-startTime << endl;
		// for(int i = 0; i < n; i++) cout << arr[i] << ' '; cout << endl;

		delete [] arr;
	}
	return 0;
}
