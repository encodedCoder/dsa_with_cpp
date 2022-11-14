// Using Simple Linear Scan Solution
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string str) {
        bool dupFound = false;
        char prev = '0';

        // scan the string until all adjacent duplicates of set two removed
        while (true) {
            // if string is empty string, return it
            if (str.size() == 0) return str;
            
            // First Find duplicates
            int i = 0;
            while (i < str.length()) {
                if (i < str.length()-1 and str[i] == str[i+1]) {
                    prev = str[i];
                    str[i] = 'D';
                    str[i+1] = 'D';
                    i += 2;
                    dupFound = true;
                } else {
                    prev = '0';
                    i++;
                }
            }
            
            // Return the distinct letters string if no duplicates
            if (not dupFound) return str;

            // Remove duplicates because duplicates are present
            int u = 0, l = 0;
            while (u < str.size()) {
                if (str[u] == 'D') {
                    u++;
                } else {
                    str[l++] = str[u++];
                }
            }
            
            // Fix the new string's end
            str.erase(str.begin()+l, str.end());

            dupFound = false;
            prev = '0';
        }
    }
};


int main() {
	// string str = "geeksforgeeks";
	// string str = "acaaabbbacdddd";
    string str = "abccbccba";
    // string str = "ississi";
    // string str = "aaaaaaaaa";

	Solution obj;
	cout << obj.removeDuplicates(str) << endl;
	
	return 0;
}  
