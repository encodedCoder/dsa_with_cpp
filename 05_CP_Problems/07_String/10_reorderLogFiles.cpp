#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<string> reorderLogFiles(vector<string>& logs) {
		int i = logs.size()-1, j = logs.size();
		while(i >= 0) {
			char ch1 = extractFirstLogChar(logs[i]);
			if (ch1 >= '0' and ch1 <= '9') {
				swap(logs[i], logs[--j]);
			}
			--i;
		}
		auto compare = [] (string str1, string str2) {
			int i = 0; while (str1[i++] != ' '); 
			string str1Identifier(str1.begin(), str1.begin()+i);
			str1.erase(str1.begin(), str1.begin() + i);
			i = 0;
			while (str2[i++] != ' '); str2.erase(str2.begin(), str2.begin() + i);
			string str2Identifier(str2.begin(), str2.begin() + i);
			if (str1 == str2) {
				return str1Identifier < str2Identifier;
			} 
			return str1 < str2;
		};
		sort(logs.begin(), logs.begin()+j, compare);
		return logs;
	}
	char extractFirstLogChar(string str) {
		int i = 0; while (str[i++] != ' '); return str[i];
	}
};

int main(int argc, char const *argv[])
{
	vector<string> logs = {"dig1 8 1 5 1","let1 art can","dig2 3 6","let2 own kit dig","let3 art zero"};
	// vector<string> logs = {"a1 9 2 3 1","g1 act car","zo4 4 7","ab1 off key dog","a8 act zoo"};

	Solution obj;
	vector<string> reorderedLogs(obj.reorderLogFiles(logs));

	for (const auto& log : reorderedLogs) {
		cout << log << endl;
	}

	return 0;
}