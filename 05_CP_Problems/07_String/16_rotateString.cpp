#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	bool rotateString(string s, string goal) {
		return (s.length() == goal.length()) and subStrPresent(s+s, goal);
	}

	bool subStrPresent(string s, string t) {
		for (int i = 0; i < s.length();) {
			int j = 0;
			while (j < t.length()){
				if (s[i++] != t[j++]) break;
			}
			if (j == t.length()) return true;
		}
		return false;
	}

};

int main(int argc, char const *argv[])
{
	// string s = "abcde"; string goal = "cdeab";
	// string s = "abcde"; string goal = "abced";	
	// string s = "abcde"; string goal = "bcdea";	
	// string s = "abcde"; string goal = "eabcd";
	// string s = "ohbrwzxvxe"; string goal = "uornhegseo";
	string s = "bbbacddceeb"; string goal = "ceebbbbacdd";

	Solution obj;
	cout << obj.rotateString(s, goal) << endl;

	return 0;
}

/*


*/