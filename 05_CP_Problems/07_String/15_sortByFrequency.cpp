#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	string frequencySort(string str) {
		unordered_map<char, int> umap;
		for (char& chr: str) {umap[chr]++;}

		priority_queue<pair<int, char>> maxHeap;
		for (auto& keyVal: umap) { maxHeap.push({keyVal.second, keyVal.first});}

		for (int i = 0; not maxHeap.empty();){
			int count = maxHeap.top().first;
			char chr = maxHeap.top().second;
			maxHeap.pop();
			while (count--){
				str[i++] = chr;
			}
		}
		return str;
	}
};

int main(int argc, char const *argv[])
{
	string s = "tree";

	Solution obj;
	cout << obj.frequencySort(s) << endl;

	return 0;
}