#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	void tokenize(string const &str, const char delim, vector<string> & out){
		size_t start;
		size_t end = 0;
	 
		while ((start = str.find_first_not_of(delim, end)) != string::npos) {
			end = str.find(delim, start);
			out.push_back(str.substr(start, end - start));
		}
	}

	string reverseWords(string s) {
		// define lambda function to split the string into a vector of strings
		vector<string> splittedStr;
		tokenize(s, ' ', splittedStr);

		reverse(splittedStr.begin(), splittedStr.end());

		string result;
		for (int i = 0; i < splittedStr.size()-1; ++i){
			result.append(splittedStr[i] + " ");
		} 
		result.append(splittedStr[splittedStr.size()-1]);
		return result;       
	}
};

int main(int argc, char const *argv[])
{
	// string s = "the sky is blue";
	// string s = "  hello world  ";
	// string s = "a good   example";
	// string s = "  Bob    Loves  Alice   ";
	string s = "Alice does not even like bob";

	Solution obj;
	cout << obj.reverseWords(s);

	return 0;
}