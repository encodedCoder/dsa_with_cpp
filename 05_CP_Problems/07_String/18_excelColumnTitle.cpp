#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	string convertToTitle(int columnNumber) {
		string columnTitle = "";
		while (columnNumber) {
			if (columnNumber % 26 == 0) { 
				columnTitle.push_back('Z');
				columnNumber--;
			} else {
				columnTitle.push_back(64 + (columnNumber % 26));
			}
			columnNumber /= 26;
		}
		reverse(columnTitle.begin(), columnTitle.end());
		return columnTitle;
	}
};

int main(int argc, char const *argv[])
{
	vector<int> columnNumbers{1,27,701,731,424518};
	// vector<int> columnNumbers{701};

	Solution obj;
	for (int columnNum: columnNumbers) { cout << obj.convertToTitle(columnNum) << endl;}

	return 0;
}