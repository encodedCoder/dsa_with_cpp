// https://practice.geeksforgeeks.org/problems/bubble-sort/1
#include <stdio.h>

// swapping the elements
void swap(int *xp, int *yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

class Solution{
public:
	void bubbleSort(int arr[], int n){
		bool swapped = true;
		for(int i = 0; i < n-1; i++){
			if(not swapped) break;
			swapped = false;
			for(int j=0; j < n-1-i; j++){
				if(arr[j] < arr[j+1]) {swap(&arr[j], &arr[j+1]); swapped = true;} 
			}
		}  
	}
};


/* Function to print an array */
void printArray(int arr[], int size){
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
 
int main(){
	int arr[1000],n,T,i;
  
	scanf("%d",&T);
	
	while(T--){
		
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	  scanf("%d",&arr[i]);
	  
	Solution ob;  
	  
	ob.bubbleSort(arr, n);
	printArray(arr, n);
	}
	return 0;;
}