#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution{
	stack<int> s;
	vector<int> result;
public:
	vector<int>& previous_greater(vector<int>& nums){
		for(const auto& num : nums){
			if(s.empty()){
				s.push(num);
				result.push_back(-1);
			}else if (s.top() > num){
				result.push_back(s.top());
				s.push(num);
			}else{//if s.top() < num//
				while(not s.empty() and s.top() < num){s.pop();}
				if(s.empty()) {result.push_back(-1);}
				else{result.push_back(s.top());}
				s.push(num);
			}
		}
		return result;
	}
};

int main(int argc, char const *argv[])
{
	vector<int> nums{15,10,18,12,4,6,2,8};
	Solution obj;
	for(const auto& ele : obj.previous_greater(nums)){cout << ele << " ";} cout << endl;
	return 0;
}
