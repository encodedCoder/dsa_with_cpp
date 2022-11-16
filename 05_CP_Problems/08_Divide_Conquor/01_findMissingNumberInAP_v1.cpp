// Linear Search Solution

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int findMissing (vector<int> AP, int d){
		for (int i = 1; i < AP.size(); i++) {
			if ((AP[0]+d*i) != AP[i]) return (AP[0]+d*i); 
		}
		return 0;
	}
};

int main(int argc, char const *argv[])
{
	int d = 2; vector<int> AP{0,2,4,6,10,12,14};
	// int d = 4; vector<int> AP{12,16,20,28};

	Solution obj;
	cout << obj.findMissing(AP, d) << endl;

	return 0;
}