#include <iostream>
#include <list>
using namespace std;

class Solution{
	public:
	int josephus(int n, int k){
		list<int> places;
		for(int i = 1; i <= n; i++){places.push_back(i);}
		for(auto ele : places){cout << ele << " ";} cout << endl;

		auto itr = places.begin();
		while(places.size() != 1){
			int temp = k;
			while(--temp){
				if(itr == places.end()) itr = places.begin();
				itr++;
			}
			if(itr == places.end()) itr = places.begin();
			itr = places.erase(itr);
		}
		return places.front();
	}
};

int main() {
	Solution ob;
	int n = 3, k = 3;
	cout<<ob.josephus(n,k)<<endl;
	return 0;
}
