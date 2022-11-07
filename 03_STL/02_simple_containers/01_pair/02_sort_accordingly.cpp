#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int nums[] = {3,1,2};
	char chrs[] = {'G', 'E', 'K'};

	vector<pair<int,char>> pairs;
	for(int i = 0; i < 3; i++){
		pairs.push_back({nums[i], chrs[i]});
	}

	for(auto chr :chrs){cout << chr << " ";} cout << endl;
	sort(pairs.begin(), pairs.end());
	for(auto &par : pairs){cout << par.second << " ";} cout << endl;
	return 0;
}
