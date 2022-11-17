#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution{
public:
	string rearrangeString(string& str, int d){
		vector<int> countVector(26);
		for(char& chr:str) if(++countVector[chr-97] > str.length()/2) return "";

		priority_queue<pair<int,char>> max_heap;
		for(int i = 0; i < 26; i++) if (countVector[i]) max_heap.push({countVector[i], i+97});

		int i = 0;
		while(not max_heap.empty()){
			int t = d+1;
			queue<pair<int,char>> q;
			while(t-- and not max_heap.empty()){
				auto currPair = max_heap.top(); max_heap.pop();
				str[i++] = currPair.second;
				if(--currPair.first) q.push(currPair);
			}
			while(not q.empty()) {max_heap.push(q.front()); q.pop();}
		}
		return str;
	}
};

int main(){
	string str = "abcdad";
	// string str = "abcdada";

	Solution obj;
	cout << obj.rearrangeString(str, 2) << endl;
}