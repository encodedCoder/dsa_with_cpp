#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> countVector(26);

        for (const auto& chr: s){
        	countVector[chr-97]++;
        }

        for (const auto& chr: t){
        	countVector[chr-97]--;
        }

        for (const auto& count : countVector){
        	if (count != 0) return false;
        }

        return true;
    }
};

int main(int argc, char const *argv[])
{
	// string s = "anagram", t = "nagaram";
	string s = "rat", t = "car";

	Solution obj;
	cout << obj.isAnagram(s, t) << endl;

	return 0;
}