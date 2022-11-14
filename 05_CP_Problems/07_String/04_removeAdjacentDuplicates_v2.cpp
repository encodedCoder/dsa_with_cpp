// Using Simple Linear Scan Solution
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string str) {
        int s = 0;
        for (int f = 0; f < str.size(); f++) {
            if (s == 0) {
                s++;
            } else if (str[s-1] != str[f]) {
                str[s++] = str[f];
            } else {
                s--;  
            }
        }
        str.erase(str.begin()+s, str.end());
        return str;
    }
};


int main() {
    // string str = "geeksforgeeks";
    // string str = "acaaabbbacdddd";
    // string str = "abccbccba";
    // string str = "ississi";
    string str = "aaaaaaaaa";
    // string str = "abbaca";


    Solution obj;
    cout << obj.removeDuplicates(str) << endl;
    
    return 0;
}  
