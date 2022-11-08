// https://practice.geeksforgeeks.org/problems/merge-sort/1
#include <stdio.h>
#include <vector>
using namespace std;

void printArray(int arr[], int size){
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

class Solution{
private:
	static int aux[100000];
	void merge(int arr[], int l, int m, int r){
		vector<int> left(arr+l, arr+m+1);
		vector<int> right(arr+m+1, arr+r+1);
		int i = 0, j = 0; int k = l;
		while (i < left.size() and j < right.size()){
			if (left[i] <= right[j]) arr[k++] = left[i++];
			else arr[k++] = right[j++];
		}
		while(i < left.size()){arr[k++] = left[i++];}
		while(j < right.size()){arr[k++] = right[j++];}
	}
public:
	void mergeSort(int arr[], int l, int r){
		if(l < r){
			int m = (l+r)/2;
			mergeSort(arr, l, m);
			mergeSort(arr, m+1, r);
			merge(arr, l, m, r);
		}
	}
};

int main()
{
	int n = 5, arr[100] = {4, 1, 3, 9, 7};

	Solution obj;
	obj.mergeSort(arr, 0, n-1);
	printArray(arr, n);

	return 0;
}