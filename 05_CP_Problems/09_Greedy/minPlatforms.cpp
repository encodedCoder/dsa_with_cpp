#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

class Solution{
	public:
	int findPlatform(int arr[], int dep[], int n){
		sort(arr, arr + n);
		sort(dep, dep + n);

		int busCount = 0;
		int maxBusCount = 0;

		int i = 0, j = 0;
		while(i < n and j < n){
			if(arr[i] <= dep[j]){
				i++;
				busCount++;
				maxBusCount = max(maxBusCount, busCount);
			} else {
				j++;
				busCount--;
			}
		}
		return maxBusCount;
	}
};

int main(){
	// int n = 3, arr[] = {900, 1100, 1235}, dep[] = {1000, 1200, 1240};
	int n = 6, arr[] = {900, 940, 950, 1100, 1500, 1800}, dep[] = {910, 1200, 1120, 1130, 1900, 2000};

	Solution obj;
	cout << obj.findPlatform(arr, dep, n) << endl;
	return 0;
}
