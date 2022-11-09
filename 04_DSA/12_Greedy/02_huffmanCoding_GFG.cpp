// https://practice.geeksforgeeks.org/problems/huffman-encoding3345/1#
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Node{
	pair<int, char> pairr;
	Node *left;
	Node *right;
	Node(){}
	Node(pair<int, char> pairr, Node*left = nullptr, Node*right = nullptr){
		this->pairr = pairr;
		this->left = left;
		this->right = right;
	}
};

class Solution{
public:
	vector<string> huffmanCodes(string str, vector<int> frequency, int n){
		auto compare = [](Node* node1, Node* node2) {return node1->pairr.first > node2->pairr.first;};
		priority_queue<Node*, vector<Node*>, decltype(compare)> min_heap(compare);
		for (int i = 0; i < n; i++){
			Node *currNode = new Node({frequency[i], str[i]});
			min_heap.push(currNode);
		}

		while (min_heap.size() != 1) {
			Node *left   = min_heap.top(); min_heap.pop();
			Node *right  = min_heap.top(); min_heap.pop();
			Node *parent = new Node({left->pairr.first+right->pairr.first, '@'}, left,  right);
			min_heap.push(parent);
		}

		Node *root = min_heap.top();
		vector<string> result;
		huffmanPreorder(root, "", result); 
		return result;
	}

	void huffmanPreorder(Node *root, string str, vector<string>& result){
		if (root){
			if (not root->left and not root->right) result.push_back(str);
			str.push_back('0');
			huffmanPreorder(root->left, str, result);
			str.pop_back();
			str.push_back('1');
			huffmanPreorder(root->right, str, result);
		}
	}
};

int main(){
	vector<pair<string, vector<int>>> testcases{
		{"abcdef",{5,9,12,13,16,45}}, 
		{"abcdef",{5,25,7,15,4,12}}, 
		{"abcdefg",{5,25,7,15,4,12,5}}, 
		{"abcd",{50,40,5,5}},
		{"qwertyuiopasdfghjklzxcvbn",{8,9,14,19,20,21,21,25,33,45,50,50,66,68,70,73,74,75,76,82,85,90,94,97,100}},
	};

	Solution obj;
	for (auto test: testcases){
		string str = test.first;
		vector<int> frequency(test.second);
		int n = str.length();
		for(auto chr: obj.huffmanCodes(str, frequency, n)) cout << chr << " ";
		cout << "\n";
	}
	return 0;
}