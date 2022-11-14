#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicateLetters(string str) {
    	int bitVector = 0;

    	int u = 0;
    	for (const auto &s : str) {
    		if (bitVector & (1 << s-'a')){
    			continue;
    		}
    		bitVector |= (1 << s-'a');
    		str[u++] = s;
    	}
    	str.erase(str.begin()+u, str.end());
    	return str;
    }
};

int main(int argc, char const *argv[])
{
	string str = "bcabc";

	Solution obj;
	cout << obj.removeDuplicateLetters(str) << endl;

	return 0;
}