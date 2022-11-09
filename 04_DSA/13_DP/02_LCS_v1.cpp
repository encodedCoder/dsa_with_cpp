#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
	int longestCommonSubsequence(string& t1, string& t2) {
		vector<vector<int>> matrix(t1.length()+1);
		for (int row=0; row < matrix.size();++row) {
			vector<int> currRow(t2.length()+1);
			matrix[row] = currRow;
		}

		for (int i=1; i<matrix.size();++i) {
			for (int j=1; j<matrix[i].size();++j){
				if (t1[i-1] == t2[j-1]) {matrix[i][j] = matrix[i-1][j-1]+1;}
				else {matrix[i][j] = max(matrix[i-1][j], matrix[i][j-1]);}
			}
		}
		return matrix[matrix.size()-1][matrix[0].size()-1];
	}
};

int main(int argc, char const *argv[]){
	string text1 = "adc", text2 = "ace";
	// string text1 = "abcde", text2 = "ace";
	// string text1 = "abc", text2 = "abc";
	// string text1 = "abc", text2 = "def";

	Solution obj;
	cout << obj.longestCommonSubsequence(text1, text2) << endl;
	return 0; 
}