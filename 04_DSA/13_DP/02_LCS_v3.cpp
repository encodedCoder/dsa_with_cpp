#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
	int longestCommonSubsequence(string& s1, string& s2) {
		int n1=s1.size();
		int n2=s2.size();
		if(n1<n2)  swap(n1,n2), swap(s1,s2);

		int a[1001]={0};
		for(int i=0;i<n1;i++)
		{
			for(int j=n2;j>0;j--)
			{
				if(s2[j-1]==s1[i]) a[j] = max(a[j-1]+1,a[j]);
			}
			for(int j=1;j<=n2;j++)
			{
				a[j] = max(a[j],a[j-1]);
			}
		}
		return a[n2];
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