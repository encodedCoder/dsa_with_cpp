#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
	vector<int> partitionLabels(string str) {

		vector<pair<int, unordered_set<char>>> labels;
		for(auto& chr : str) {
			int j = 0;
			while(j < labels.size() and (labels[j].second.find(chr)==labels[j].second.end())) j++;
			if (j == labels.size()){
				unordered_set<char> currSet{chr};
				labels.push_back({1, currSet});
			} else {
				labels[j].first += 1;
				for(int k = labels.size()-1; k > j; k--) {
					labels[j].first += labels[k].first;
					labels[j].second.merge(labels[k].second);
					labels.pop_back();
				}
			}
		}

		vector<int> labelsSizes;
		for(auto& lable : labels) {
			// for(auto& ele: lable.second){cout << ele << " ";}
			labelsSizes.push_back(lable.first);
		}

		return labelsSizes;
	}
};


int main(){
	string str = "ababcbacadefegdehijhklij";
	// string str = "ababcbacadefegdehijhklija";

	Solution obj;
	for (auto& ele: obj.partitionLabels(str)){cout << ele << " ";}
	cout << endl;
	
	return 0;
}