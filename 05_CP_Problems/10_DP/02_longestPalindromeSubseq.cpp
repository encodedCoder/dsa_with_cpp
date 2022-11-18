class Solution {
public:
	int longestPalindromeSubseq(string s) {
		// 
	}

	// bool isPalindrome(string s){
	// 	for (int i=0, j = s.length()-1; i < j; ++i, --j) {
	// 		if(s[i] != s[j]) return false;
	// 	}
	// 	return true;
	// }
};

int main(int argc, char const *argv[])
{
	string s = "bbbab";
	// string s = "cbbd";

	Solution obj;
	cout << obj.longestPalindromeSubseq(s) << endl;
	return 0;
}