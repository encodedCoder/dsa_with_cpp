#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

// Approach_02 - Sorting
class Solution {
public:
	int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
		auto cmp = [](vector<int>& b1, vector<int>& b2){return b1[1] > b2[1];};
		sort(boxTypes.begin(), boxTypes.end(), cmp);

		int units = 0, i = 0;
		while(truckSize and i < boxTypes.size()){
			if (boxTypes[i][0] <= truckSize){
				units += (boxTypes[i][0]*boxTypes[i][1]);
				truckSize -= boxTypes[i][0];
			} else {
				 units += (truckSize*boxTypes[i][1]);
				 truckSize -= truckSize;
			}
			i++;
		}
		return units;
	}
};

int main() {
	// int truckSize = 4;  vector<vector<int>> boxTypes = {{1,3},{2,2},{3,1}}; 
	int truckSize = 10; vector<vector<int>> boxTypes = {{5,10},{2,5},{4,7},{3,9}}; 

	Solution obj;
	cout << obj.maximumUnits(boxTypes, truckSize) << endl;
}