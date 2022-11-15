// sorting based approach
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<vector<string>> groupAnagrams(vector<string>& strs) {
		vector<pair<string, int>> strsSmartCopy;

		// step 1: copy the strings to new vector with their indices
			int i = 0;
			for (auto& str : strs){
				strsSmartCopy.push_back({str, i++});
			}

		// step 2: sort each individual string from strings vector
			for (auto& str : strsSmartCopy) {
				sort(str.first.begin(), str.first.end());
			}

		// step 3: sort the entire strings vector
		sort (strsSmartCopy.begin(), strsSmartCopy.end());

		// step 4: create group of anagrams
			vector<vector<string>> result;
			int j;
			for (i = 0; i < strsSmartCopy.size(); i = j) {
				vector<string> currGroup = {strs[strsSmartCopy[i].second]};
				j = i+1;
				while (j < strsSmartCopy.size()){
					if (strsSmartCopy[i].first == strsSmartCopy[j].first) {
						currGroup.push_back(strs[strsSmartCopy[j].second]);
					} else {
						break;
					}
					++j;
				}
				result.push_back(currGroup);
			}

		// step 5: Final step -> resturn result
			return result;
	}
};

int main(int argc, char const *argv[])
{
	// vector<string> strs = {"ate"};
	vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
	// vector<string> strs = {"eat","tea","tan","ate","nat","bat","bbt"};
	// vector<string> strs = {""};
	// vector<string> strs = {};
	// vector<string> strs = {"a"};

	Solution obj;
	vector<vector<string>> anagramsGroups(obj.groupAnagrams(strs));

	for (auto &anagrams :  anagramsGroups) {
		for (auto& str: anagrams){
			cout << "\"" << str << "\"" << " ";
		} cout << endl;
	}

	return 0;
}