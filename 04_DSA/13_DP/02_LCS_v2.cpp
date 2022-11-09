#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
	int longestCommonSubsequence(string& s1, string& s2) {
		int n1 = s1.size();
		int n2 = s2.size();

		if (n1 < n2) swap(s1, s2), swap(n1, n2);

		int* prev = new int[n2+1]{0};
		for (int i = 1; i <= n1; i++) {
			int* curr = new int[n2+1]{0};
			for (int j = 1; j <= n2; j++) {
				if (s1[i-1] == s2[j-1]) 
					curr[j] = 1 + prev[j-1];
				else 
					curr[j] = max (prev[j], curr[j-1]);
			}
			prev = curr;
		}
		return prev[n2];
	}
};

int main(int argc, char const *argv[]){
	// string text1 = "adc", text2 = "ace";
	// string text1 = "adchbjh", text2 = "aceebkhb";
	// string text1 = "abcde", text2 = "ace";
	// string text1 = "ace", text2 = "abcde";
	// string text1 = "abc", text2 = "abc";
	// string text1 = "abc", text2 = "def"; 
	string text1 = "hofubmnylkra", text2 = "pqhgxgdofcvmr"; 

	Solution obj;
	cout << obj.longestCommonSubsequence(text1, text2) << endl;
	return 0; 
}

/*/ string text1 = "

"hofubmnylkra"
"pqhgxgdofcvmr"

"*/