#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Approach_01 - Greedy Approach
class Solution {
public:
	int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
		auto cmp = [](vector<int>& b1, vector<int>& b2){return b1[1] < b2[1];};
		priority_queue<vector<int>, vector<vector<int>>, decltype(cmp)> max_heap(cmp);

		for(const auto& box: boxTypes){max_heap.push(box);}
			
		int units = 0;
		while(truckSize and max_heap.size()){
			auto boxType = max_heap.top();
			if (boxType[0] <= truckSize){
				units += (boxType[0]*boxType[1]);
				truckSize -= boxType[0];
			} else {
				 units += (truckSize*boxType[1]);
				 truckSize -= truckSize;
			}
			max_heap.pop();
		}
		return units;
	}
};

int main() {
	int truckSize = 4;  vector<vector<int>> boxTypes = {{1,3},{2,2},{3,1}}; 
	// int truckSize = 10; vector<vector<int>> boxTypes = {{5,10},{2,5},{4,7},{3,9}}; 

	Solution obj;
	cout << obj.maximumUnits(boxTypes, truckSize) << endl;
}