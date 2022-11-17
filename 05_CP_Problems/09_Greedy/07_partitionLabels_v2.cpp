#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
	vector<int> partitionLabels(string str) {
		unordered_map<char, int> umap;
		for(int i = 0; i < str.length(); i++)umap[str[i]] = i;

		vector<int> labelsSizes;
		for(int i = 0; i < str.length();){
			int currLower = i;
			int currUpper = umap[str[i++]];
			while(i < currUpper) currUpper = max(currUpper, umap[str[i++]]);
			labelsSizes.push_back(currUpper-currLower+1); 
			if(currUpper == currLower) continue;
			i++;
		}
		return labelsSizes;
	}
};


int main(){
	// string str = "caedbdedda";
	// string str = "ababcbacadefegdehijhklij";
	string str = "ababcbacadefegdehijhklija"; 

	Solution obj;
	for (auto& ele: obj.partitionLabels(str)){cout << ele << " ";}
	cout << endl;
	
	return 0;
}