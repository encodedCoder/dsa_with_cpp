// { Driver Code Starts
	#include<bits/stdc++.h>
	using namespace std;
// } Driver Code Ends

class Solution {
public:
	string FirstNonRepeating(string A){
		queue<char> first;
		vector<int> attendance(26);

		first.push(A[0]);
		attendance[A[0]-97] = 1;

		for (int i = 1; i < A.length(); i++) {
			if(++attendance[A[i]-97] == 1) {
				first.push(A[i]);
				A[i] = first.front();
			} else {
				while (not first.empty() and attendance[first.front()-97] != 1) { first.pop(); } 
				if (first.empty()) A[i] = '#';
				else A[i] = first.front();
			}
		}
		return A;
	}
};

// { Driver Code Starts.
	int main(){
			// string A = "aabc";
			// string A = "hrqcvsvszpsjammdrw";
			string A = "pqimpqysf";
			Solution obj;
			string ans = obj.FirstNonRepeating(A);
			cout << ans << "\n";
		return 0;
	}  
// } Driver Code Ends