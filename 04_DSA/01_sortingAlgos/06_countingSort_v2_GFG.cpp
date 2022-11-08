// https://practice.geeksforgeeks.org/problems/counting-sort/1#
#include <bits/stdc++.h>
using namespace std;
#define RANGE 255

class Solution{
	public:
	//Function to arrange all letters of a string in lexicographical 
	//order using Counting Sort.
	string countSort(string s){
		int countVector[26] = {0};
		for(char& ch: s) countVector[ch-97]++;
	
		for (int i = 0, j = 0; i < 26; i++) {
			while(countVector[i]--) s[j++] = i+97;
		}
		return s;
	}
};

int main()
{
	// string S = "edsab";
	string S = "geeksforgeeks";
	Solution obj;
	cout << obj.countSort(S) << endl;
	return 0;
}
