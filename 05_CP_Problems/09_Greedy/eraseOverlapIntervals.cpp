#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int eraseOverlapIntervals(vector<vector<int>>& intervals) {
		// auto cmp=[](vector<int>& p1, vector<int>& p2){return p1[1] < p2[1];};
		sort(intervals.begin(), intervals.end());
		for (auto& pairr:intervals){
			cout << pairr[0] << " " << pairr[1] <<endl;
		}

		int ovelappingIntervalsCount = 0;

		int prevEnd   = intervals[0][1];
		for(int i = 1; i < intervals.size(); ++i){
			int currStart = intervals[i][0];
			int currEnd   = intervals[i][1];
			if(currStart < prevEnd){ovelappingIntervalsCount++;} 
			else {prevEnd = currEnd;}
		}
		return ovelappingIntervalsCount;
	}
};

int main(){
	// int n = 2; vector<int> start{2, 1}, end{2, 2};
	// int n = 4; vector<int> start{1, 3, 2, 5}, end{2, 4, 3, 6};
	// int n = 4; vector<int> start{1, 2, 4, 6}, end{8, 3, 5, 7};

	// vector<vector<int>> intervals{{1,2},{2,3},{3,4},{1,3}};
	// vector<vector<int>> intervals{{1,2},{1,2},{1,2}}; 
	// vector<vector<int>> intervals{{1,2},{2,3}}; 
	vector<vector<int>> intervals{{0,2},{1,3},{2,4},{3,5},{4,6}}; 

	Solution obj;
	cout << obj.eraseOverlapIntervals(intervals) << endl;
	return 0;
}
