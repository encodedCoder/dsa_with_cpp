#include<iostream> 
#include<vector>
using namespace std; 

class Solution{   
public:
	bool isSubsetSum(int N, int arr[], int sum){
		vector<vector<bool>> sum_sack;
		for(int i = 0; i <= N; ++i) {sum_sack.push_back(vector<bool>(sum+1));}
		sum_sack[0][0] = true;

		for (int i = 1; i <= N; ++i) {
			sum_sack[i][0] = true;
			for (int j = 1; j <= sum; ++j) {
				bool isSumWithExclusion = sum_sack[i-1][j];
				bool isSumWithInclusion = (arr[i-1] <= j) ? sum_sack[i-1][j-arr[i-1]] : false;
				sum_sack[i][j] = isSumWithExclusion or isSumWithInclusion;
			}
		}
		return sum_sack[N][sum]; 
	}
};

int main() 
{ 
	// int sum = 9;  int arr[] = {3, 34, 4, 12, 5, 2};
	int sum = 30;  int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
	// int sum = 30; int arr[] = {3, 34, 4, 12, 5, 2};

	int N = end(arr)-begin(arr);
	Solution obj;
	cout << obj.isSubsetSum(N, arr, sum) << endl;

	return 0; 
}