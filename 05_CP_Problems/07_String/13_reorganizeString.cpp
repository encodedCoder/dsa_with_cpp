#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	string reorganizeString(string s) {
		// step 1: count the occurrences of each charcater in given string ==> O(n) Time, O(1) Space
			vector<int> chrCountVector(26);
			for (auto& chr: s) { if(++chrCountVector[chr-97] > (s.size()+1)/2) return "";}
		
		// step 2: make a max_heap of pair<charCount, char>  ==> O(1) Time and Space
			priority_queue<pair<int, char>> max_heap;
			for (int i = 0; i < 26; i++) {
				if (chrCountVector[i]) {max_heap.push({chrCountVector[i], 97+i});}
			}

		// step 3: pop top 2 characters and put them into result string to create alteration
			int i = 0;
			pair<int, char> prev = max_heap.top(); max_heap.pop();
			s[i++] = prev.second;
			while (not max_heap.empty()) {
				pair<int, char> curr = max_heap.top(); max_heap.pop();
				s[i++] = curr.second;
				if (--prev.first) max_heap.push(prev);
				prev = curr;
			}
		return s;
	}
};


int main(int argc, char const *argv[])
{
	// string s = "aab";
	// string s = "aabca";
	// string s = "aaab";
	// string s = "abaaba";
	// string s = "abaabc";
	// string s = "vvvlo";
	// string s = "bfrbs";
	string s = "aabbcc";
	// string s = "aaaaaaaabcdefghijkl";

	Solution obj;
	cout << obj.reorganizeString(s) << endl;

	return 0;
}


