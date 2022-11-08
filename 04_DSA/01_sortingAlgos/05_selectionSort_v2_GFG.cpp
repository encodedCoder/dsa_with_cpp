// https://practice.geeksforgeeks.org/problems/selection-sort/1#
#include <stdio.h>
 
class Solution{
private:
    int select(int arr[], int i){
        int maxIndex = 0;
        for(int j = 1; j < i; j++){
            if(arr[j] > arr[maxIndex]) maxIndex = j;
        }
        return maxIndex;
    }
    void swap(int& a, int& b){int temp = a; a = b, b = temp;}
public:
    void selectionSort(int arr[], int n){
        for(int i = 0; i < n; i++){
            int maxIndex = select(arr, n-i);
            swap(arr[maxIndex], arr[n-i-1]);
        }
    }
};

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program to test above functions
int main()
{
    int n = 5, arr[] = {4, 1, 3, 9, 7};
      
    Solution obj;  
    obj.selectionSort(arr, n-1);
    printArray(arr, n);
    return 0;
}  // } Driver Code Ends