#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	int activitySelection(vector<int> start, vector<int> end, int n){
		vector<pair<int,int>> startEnd;
		for(int i = 0; i < n; ++i){startEnd.push_back({start[i], end[i]});}

		auto cmp=[](pair<int,int>& p1, pair<int,int>& p2){return p1.second < p2.second;};
		sort(startEnd.begin(), startEnd.end(), cmp);

		int activitiesCount = 0;
		int prevStart = startEnd[0].first;
		int prevEnd = startEnd[0].second;
		bool anyoneTested = false, isStart = true;
		for(int i = 0; i < n; ++i){
			if (isStart){activitiesCount++; isStart = false;}
			else {	
				int currStart = startEnd[i].first;
				int currEnd = startEnd[i].second;
				if(currStart > prevEnd){
					anyoneTested = true;
					prevStart = currStart;
					prevEnd = currEnd;
					activitiesCount++;
				}
			}
		}
		if (not anyoneTested) return 1;
		return activitiesCount;
	}
};

int main(){
	// int n = 2; vector<int> start{2, 1}, end{2, 2};
	// int n = 4; vector<int> start{1, 3, 2, 5}, end{2, 4, 3, 6};
	// int n = 4; vector<int> start{1, 2, 4, 6}, end{8, 3, 5, 7};
	int n = 5; vector<int> start{1, 2, 4, 6, 5}, end{8, 3, 5, 7, 7};

	Solution obj;
	cout << obj.activitySelection(start, end, n) << endl;
	return 0;
}
