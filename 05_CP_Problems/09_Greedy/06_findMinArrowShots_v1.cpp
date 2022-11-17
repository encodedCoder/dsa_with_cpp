#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	int findMinArrowShots(vector<vector<int>>& points) {
		sort(points.begin(), points.end());
		for (auto& point : points){cout << point[0] << "->" << point[1] << ", ";} cout << endl;
		int arrows = 0;
		for (int i = 0; i < points.size();){
			int end = points[i][1];
			if (i == points.size()-1){arrows++; break;}
			i++;
			while (i < points.size()){
				int currStart = points[i][0];
				int currEnd   = points[i][1];
				if (currEnd < end){end = currEnd; i++;}
				else if (end < currStart){break;}
				else if (currStart <= end and currEnd > end){i++;}
				else if (currEnd == end){i++;}
			}
			arrows++;
		}
		return arrows;
	}
};

int main(){
	vector<vector<vector<int>>> pointsVectors{
		{{2,3},{2,3}},
		{{10,16},{2,8},{1,6},{7,12}},
		{{1,2},{3,4},{5,6},{7,8}},
		{{1,2},{2,3},{3,4},{4,5}},
		{{10,16},{2,8},{1,6},{7,12},{3,4},{5,6}},
		{{1,9},{7,16},{2,5},{7,12},{9,11},{2,10},{9,16},{3,9},{1,3}}
	};

	for(auto& points: pointsVectors){
		Solution obj;
		cout << obj.findMinArrowShots(points) << endl;
	}
	return 1;
}