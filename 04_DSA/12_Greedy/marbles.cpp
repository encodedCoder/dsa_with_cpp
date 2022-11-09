#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution{
public:
	string compareMarbles(int n, vector<int> rupam, vector<int> ankit){
		vector<pair<int,int>> rupamWtCount(101, {0, -1});
		for (int i=0; i < rupam.size();i++){
			rupamWtCount[rupam[i]].first++;
			rupamWtCount[rupam[i]].second = rupam[i];
		}

		vector<pair<int,int>> ankitWtCount(101, {0, -1});
		for (int i=0; i < rupam.size();i++){
			ankitWtCount[ankit[i]].first++;
			ankitWtCount[ankit[i]].second = ankit[i];
		}

		auto compare = [](pair<int,int>& p1,  pair<int,int>& p2){
			if (p1.second == -1) return false;
			else if(p2.second == -1) return true;
			else return p1.first > p2.first;
		};
		sort(rupamWtCount.begin(), rupamWtCount.end(), compare);
		sort(ankitWtCount.begin(), ankitWtCount.end(), compare);

		int i = 0;
		while (rupamWtCount[i++].second != -1);
		rupamWtCount.erase(rupamWtCount.begin()+(i-1), rupamWtCount.end());

		i = 0;
		while (ankitWtCount[i++].second != -1);
		ankitWtCount.erase(ankitWtCount.begin()+(i-1), ankitWtCount.end());

		// for (auto& pairr: rupamWtCount){cout << pairr.first << "->" << pairr.second << ", ";} cout<<endl;
		// for (auto& pairr: ankitWtCount){cout << pairr.first << "->" << pairr.second << ", ";} cout<<endl;

		i = 0;
		while(i < rupamWtCount.size() and i < ankitWtCount.size() and rupamWtCount[i].first == ankitWtCount[i].first) i++;
		if (rupamWtCount[i].second > ankitWtCount[i].second) return "Rupam";
		else if (rupamWtCount[i].second < ankitWtCount[i].second) return "Ankit";
		return "Tie";
	}
};

int main() {
	int testcases;
	cin >> testcases;   

	while(testcases--){
		int n;
		cin >> n;

		vector<int> rupam(n);
		for(int i = 0; i < n; i++) cin >> rupam[i];
		vector<int> ankit(n);
		for(int i = 0; i < n; i++) cin >> ankit[i];

		Solution obj;
		cout << obj.compareMarbles(n, rupam, ankit) << endl;
	}

	return 0;
}

/*
2
6
5 3 1 4 3 2
4 3 1 1 1 5
5
1 2 3 4 5
5 4 3 2 1
*/