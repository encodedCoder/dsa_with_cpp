#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
	int matrixMultiplication(int N, int arr[]){
		vector<vector<int>> matrix;
		for (int i = 1; i < N; i++) {
			matrix.push_back(vector<int>(N-1));
		}

		for (int i = 0; i < matrix.size(); i++){
			for (int j = 0, k = 0, l = i; j < matrix[i].size()-i; j++, k++, l++){
				if (k == l) continue;
				int minn = INT_MAX;
				for (int m = k; m < l; m++){
					minn = min(minn, (matrix[k][m] + matrix[m+1][l] + arr[k]*arr[m+1]*arr[l+1]));
				}
				matrix[k][l] = minn;
			}
		}

		return matrix[0][matrix.size()-1];
	}
};

int main(){
	// int N = 4; int arr[] = {10,30,5,60};
	// int N = 5; int arr[] = {1,2,1,4,1};
	int N = 5; int arr[] = {1,2,3,4,5};
	// int N = 5; int arr[] = {40,20,30,10,30};
	
	Solution obj;
	cout << obj.matrixMultiplication(N, arr) << endl;
	return 0;
}