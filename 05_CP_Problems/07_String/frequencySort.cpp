// 451. Sort Characters By Frequency

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	string frequencySort(string str) {
		priority_queue<pair<int, char>> max_heap;

		vector<int> digitsCount(10);
		vector<int> upperCharCount(26);
		vector<int> lowerCharCount(26);

		for (const auto& chr: str) {
			if (chr >= '0' and chr <= '9') {
				digitsCount[chr-48]++;
			}
			else if (chr >= 'A' and chr <= 'Z') {
				upperCharCount[chr-65]++;
			} else {
				lowerCharCount[chr-97]++;
			}
		}

		for (int i = 0; i < digitsCount.size(); i++) {
			if (digitsCount[i]) {
				max_heap.push({digitsCount[i], 48+i});
			} 
		}

		for (int i = 0; i < upperCharCount.size(); i++) {
			if (upperCharCount[i]) {
				max_heap.push({upperCharCount[i], 65+i});
			}
		}

		for (int i = 0; i < lowerCharCount.size(); i++) {
			if (lowerCharCount[i]) {
				max_heap.push({lowerCharCount[i], 97+i});
			}
		}

		int i = 0;
		while (not max_heap.empty()) {
			int chr = max_heap.top().second;
			int frequency = max_heap.top().first;
			while (frequency--) {
				str[i++] = chr;
			}
			max_heap.pop();
		}
		return str;
	}
};

int main(int argc, char const *argv[])
{
	string str = "tree";

	Solution obj;
	cout << obj.frequencySort(str) << endl;

	return 0;
}