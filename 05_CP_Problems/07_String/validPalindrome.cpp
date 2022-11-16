#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	bool isPalindrome(string str) {
		// step 0: if string is of lenght 1
			if (str.length() <= 1){
				return true;
			}
		// step 1: remove non-alphanumeric characters, convert all to lowercase
			int s = 0, f = 0;
			for (f = 0;  f < str.length(); f++) {
				if(isDigit(str[f])){
					str[s++] = str[f];
				} else if (isLowercase(str[f])) {
					str[s++] = str[f];
				} else if (isUppercase(str[f])) {
					str[s++] = 97 + str[f]-65;
				}
			}

		// step 2: adjust the new valid length of string
			str.erase(str.begin() + s, str.end());

		// step 3: now check the validity of the palindrome
			int i = 0, j = str.length()-1;
			while (i < j) {
				if (str[i++] != str[j--]) return false;
			}
			return true;
	}

	bool isDigit(const char& c) {
		if (c >= '0' and c <= '9') return true; else return false;
	}

	bool isLowercase(char& c){
		if (c >= 'a' and c <= 'z') return true; else return false;
	}

	bool isUppercase(char& c){
		if (c >= 'A' and c <= 'Z') return true;
		else return false;
	}

};

int main(int argc, char const *argv[])
{
	// string str = ": Panama";
	string str = "A man, a plan, a canal: Panama";

	Solution obj;
	cout << obj.isPalindrome(str) << endl;

	return 0;
}