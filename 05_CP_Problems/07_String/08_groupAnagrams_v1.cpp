// Brute Force Solution
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<vector<string>> groupAnagrams(vector<string>& strs) {
		vector<vector<string>> result = {};
		if (strs.size() == 0) return result;
		for (int i = 0; i < strs.size(); ++i) {
			if (strs[i] != "Checked") {
				vector<string> currGroup = {strs[i]};
				for (int j = i+1; j < strs.size(); ++j) {
					if (areAnagrams(strs[i], strs[j])){
						currGroup.push_back(strs[j]);
						strs[j] = "Checked";
					}
				}
				result.push_back(currGroup);
			}
		}
		return result;
	}

	bool areAnagrams (string& s1, string& s2){
		vector<int> countVector(26);
        if (s1.length() != s2.length()) return false;
		for (auto &chr : s1) countVector[chr-97]++;
		for (auto &chr : s2) countVector[chr-97]--;
		for (auto &count : countVector) if (count != 0) return false;
		return true;
	}
};

int main(int argc, char const *argv[])
{
	// vector<string> strs = {"ate"};
	// vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
	// vector<string> strs = {""};
	// vector<string> strs = {};
	// vector<string> strs = {"a"};
	// vector<string> strs = {"",""};
	vector<string> strs = {"","b",""};

	Solution obj;
	vector<vector<string>> anagramsGroups(obj.groupAnagrams(strs));

	for (auto &anagrams :  anagramsGroups) {
		for (auto& str: anagrams){
			cout << "\"" << str << "\"" << " ";
		} cout << endl;
	}

	return 0;
}