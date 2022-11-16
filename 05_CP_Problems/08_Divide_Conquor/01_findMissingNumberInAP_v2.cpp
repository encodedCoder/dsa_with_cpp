// Binary Search Solution

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int findMissing (vector<int> AP, int d){
		int left = 0;
		int right = AP.size()-1;
		while (left != right) {
			int mid = (left + right) / 2;
			if (AP[mid] != (AP[0]+d*mid)) right = mid-1;
			else left = mid+1;
		}
		return (AP[0]+d*left);
	}
};

int main(int argc, char const *argv[])
{
	// int d = 2; vector<int> AP{0,2,4,6,10,12,14};
	int d = 4; vector<int> AP{12,16,20,28};

	Solution obj;
	cout << obj.findMissing(AP, d) << endl;

	return 0;
}