// Horizontal Scan Solution
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		string commonPrefix = strs[0];
		if (strs.size() == 1) return commonPrefix;

		for (int i = 1; i < strs.size(); ++i) {
			if (commonPrefix.size() == 0) return "";
			int j = 0; while (commonPrefix[j] != '\0' and commonPrefix[j] == strs[i][j]) ++j;
			if (j == commonPrefix.size()) continue;
			commonPrefix.erase(commonPrefix.begin()+j, commonPrefix.end());
		}
		return commonPrefix;
	}
};

int main(int argc, char const *argv[])
{
	// vector<string> strs{"flower"};
	// vector<string> strs{"flower","flow","flight"};
	// vector<string> strs{"flower","flow","flight",""};
	vector<string> strs{"flower","flower","flower","flower"};
	// vector<string> strs{"dog","racecar","car"};

	Solution obj;
	cout << obj.longestCommonPrefix(strs) << endl;

	return 0;
}