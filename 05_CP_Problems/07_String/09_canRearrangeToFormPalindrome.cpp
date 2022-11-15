#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	bool canRearrange(string str) {
		vector<int> countVector(26);
	    
	    for (const auto& chr : str) {
	        countVector[chr-97]++;
	    }
	    
	    int oddTimes = 0;
	    for (const auto& count : countVector) {
	        if (count % 2 == 1) { oddTimes++; }
	    }
	    
	    if (oddTimes > 1) { return false; }
	    else { return true; }
	}	
};

int main(int argc, char const *argv[])
{
	string str = "racecar";
	// string str = "geeksogeeks";
	// string str = "geeksforgeeks";


	Solution obj;
	cout  << obj.canRearrange(str) << endl;

	return 0;
}