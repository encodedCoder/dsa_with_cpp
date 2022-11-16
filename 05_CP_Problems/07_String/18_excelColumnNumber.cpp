#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int titleToNumber(string& columnTitle) {
        int columnNumber = 0;
        for (int i = 1; i < columnTitle.length(); i++){ columnNumber += pow(26, i);}
    	for (int i = 0; i < columnTitle.length()-1; i++){
    		columnNumber += (columnTitle[i]-65)*pow(26, columnTitle.length()-(i+1));
    	}
    	columnNumber += columnTitle[columnTitle.length()-1]-64;
    	return columnNumber;
    }
};

int main(int argc, char const *argv[])
{
	// string columnTitle = "A";
	// string columnTitle = "AA";
	// string columnTitle = "ZY";
	// string columnTitle = "ABC";
	string columnTitle = "XCYP";

	Solution obj;
	cout << obj.titleToNumber(columnTitle) << endl;

	return 0;
}