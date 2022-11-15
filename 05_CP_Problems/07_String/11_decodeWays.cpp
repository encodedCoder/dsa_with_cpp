#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numDecodings(string code) {
    	// step 1: remove all leading zeroes from code
        int i = 0; while ( code[i] == '0') i++; code.erase(code.begin(), code.begin()+i);
        if (code.length() <= 1) return code.length();

        int count = 0;
        if (code.find('0') == string::npos) count++;

        return code.length();
    }
};

int main(int argc, char const *argv[])
{
	// string str = "12";
	// string str = "226";
	// string str = "0";
	// string str = "06";
	string str = "11106";

	Solution obj;
	cout << obj.numDecodings(str) << endl;

	return 0;
}