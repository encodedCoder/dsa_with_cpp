#include <iostream> 
#include <vector>
using namespace std; 

class Solution{
public:
	int minimumNumberOfSwaps(string str){
		int countL = 0;
		int countR = 0;
		int swapCount = 0;
		int imbalanceCount = 0;
		for (auto& chr: str){
			if (chr == '['){
				countL++;
				if (imbalanceCount > 0) swapCount += imbalanceCount--;
			}
			else if (chr == ']'){
				countR++;
				imbalanceCount = countR - countL;
			}
		}
		return swapCount;
	}
};

int main() { 
	vector<string> testcases{"[]][][", "[[][]]", "]][[", "]]]]]][[[[[["};
	for (auto& str: testcases) {
		Solution obj;
		cout << obj.minimumNumberOfSwaps(str) << endl;
	}
	return 0; 
}