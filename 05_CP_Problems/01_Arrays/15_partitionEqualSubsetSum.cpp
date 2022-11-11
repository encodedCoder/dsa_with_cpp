#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

class Solution {
public:
	bool canPartition(vector<int>& n) {
		int summ = accumulate(n.begin(), n.end(), 0);
		if (summ % 2 != 0) return false;

		int sum = summ/2;

		bool **m = new bool*[n.size()+1];
		m[0] = new bool[sum+1]{true};
		for (int i = 1; i <= n.size(); i++) {
			m[i] = new bool[sum+1]{true};
			for (int j = 1; j <= sum; j++) {
				m[i][j] = (m[i-1][j]) or ((n[i-1] <= j) ? (m[i-1][j-n[i-1]]) : (false));
			}
		}
		return m[n.size()][sum];
	}
};

int main(int argc, char const *argv[])
{
	vector<int> n{1,5,11,5};
	// vector<int> n{1,2,3,5};

	Solution obj;
	cout << obj.canPartition(n) << endl;

	return 0;
}