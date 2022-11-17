#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:

	int findMinArrowShots(vector<vector<int>>& points) {
		if(points.size() == 1)return 1;
		auto comp = [](vector<int>& v1, vector<int>& v2){return v1[1] < v2[1];};
		sort(points.begin(), points.end(), comp);
		// for (auto& point : points){cout << point[0] << "->" << point[1] << ", ";} cout << endl;
		int res = 1;
		int prev = points[0][1];
		for(int i = 1; i < points.size(); i++){
			if(prev < points[i][0]){
				res++;
				prev = points[i][1];
			}
		}
		return res;
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

	cout << "complete" <<  endl;

	return 1;
}