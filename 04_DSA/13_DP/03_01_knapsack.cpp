#include<iostream>
#include<vector>
using namespace std;

struct Solution{
	int knapSack(int W, int wt[], int val[], int N) { 
		// Create a N*W knap_sack to store the values
			vector<vector<int>> knap_sack;
			for (int i = 0; i <= N; ++i) {
				knap_sack.push_back(vector<int>(W+1)); 
			}

			// for (int i = 0; i <= N; ++i) {
			// 	for (int w = 0; w <= W; ++w) {
			// 		cout << knap_sack[i][w] << " ";
			// 	} cout << endl;
			// } cout << endl;

		// Write the main logic of 0/1 knapSack
			for (int i = 1; i <= N; ++i) {
				for (int w = 1; w <= W; ++w) {
					int valWithExclusion = knap_sack[i-1][w];
					int valWithInclusion = (wt[i-1] <= w) ? (val[i-1] + knap_sack[i-1][w-wt[i-1]]):(0);
					knap_sack[i][w] = max(valWithExclusion, valWithInclusion);
				}
			}

			// for (int i = 0; i <= N; ++i) {
			// 	for (int w = 0; w <= W; ++w) {
			// 		cout << knap_sack[i][w] << " ";
			// 	} cout << endl;
			// } cout << endl;

	   return knap_sack[N][W];
	}
};

int main(){
	// int N = 3, W = 4; int val[] = {1,2,3}; int wt[] = {4,5,1};
	// int N = 3, W = 4; int val[] = {3,1,2}; int wt[] = {1,4,5};
	// int N = 3, W = 3; int val[] = {1,2,3}; int wt[] = {4,5,6};

	int N = 58, W = 41; 
	int val[] = {57,95,13,29,1,99,34,77,61,23,24,70,73,88,33,61,43,5,41,63,8,67,20,72,98,59,46,58,64,94,97,70,46,81,42,7,1,52,20,54,81,3,73,78,81,11,41,45,18,94,24,82,9,19,59,48,2,72}; 
	int wt[] =  {83,84,85,76,13,87,2,23,33,82,79,100,88,85,91,78,83,44,4,50,11,68,90,88,73,83,46,16,7,35,76,31,40,49,65,2,18,47,55,38,75,58,86,77,96,94,82,92,10,86,54,49,65,44,77,22,81,52};

	Solution obj;
	cout << obj.knapSack(W, wt, val, N)<< endl;
	return 0;
}