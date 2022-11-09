// { Driver Code Starts
	#include <bits/stdc++.h>
	using namespace std;

	struct Item{
		int value;
		int weight;
	};
// } Driver Code Ends

class Solution{
public:
	//Function to get the maximum total value in the knapsack.
	double fractionalKnapsack(int W, Item arr[], int n){
		vector<double> ratio;
		for(int i = 0; i < n; i++) ratio.push_back(double(arr[i].value)/(arr[i].weight));

		priority_queue<pair<double, int>> max_heap;
		for(int i = 0; i < n; i++) max_heap.push({ratio[i], i});

		double result = 0;
		while(W and not max_heap.empty()){
			auto currRatio = max_heap.top();
			if(arr[currRatio.second].weight <= W){
				result += arr[currRatio.second].value;
				W -= arr[currRatio.second].weight;
				max_heap.pop();
			}
			else {
				result += currRatio.first * W;
				W -= W;
				max_heap.pop();
			}
		}
		return result;
	}
		
};

// { Driver Code Starts.
int main()
{
	// int n = 3, W = 50; 
	// int values[] = {60,100,120};
	// int weights[] = {10,20,30};

	// int n = 2, W = 50; 
	// int values[] = {60,100};
	// int weights[] = {10,20};

	int n = 1, W = 53; 
	int values[] = {53};
	int weights[] = {41};
		
	Item arr[n];
	for(int i = 0; i < n; i++){
		arr[i].value = values[i];
		arr[i].weight =  weights[i];
	}

	Solution obj;
	cout<<obj.fractionalKnapsack(W, arr, n)<<endl;
	return 0;
}  
// } Driver Code Ends