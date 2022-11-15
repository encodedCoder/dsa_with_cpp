#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqChar(string str) {
        vector<int> attendance(26);

        for (auto& chr : str) {
        	attendance[chr-97]++;
        }

        for (int i = 0; i < str.size(); i++) {
        	if (attendance[str[i]-97] == 1) {
        		return i;
        	}
        }
        return -1;
    }
};

int main(int argc, char const *argv[])
{
	// string str = "abc";
	string str = "leetcodelt";

	Solution obj;
	cout << obj.firstUniqChar(str) << endl;

	return 0;
}