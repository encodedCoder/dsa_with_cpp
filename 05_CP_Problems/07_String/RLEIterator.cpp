#include <bits/stdc++.h>
using namespace std;

class RLEIterator {
	vector<int> * encodedList;
	int i;
public:
    RLEIterator(vector<int>& A) {
        this->encodedList = &A;
        i = 0;
    }
    
    int next(int n) {
    	cout << typeid(this->encodedList).name() << endl;
    	return this->encodedList[0][1];
    }
};

/**
 * Your RLEIterator object will be instantiated and called as such:
 * RLEIterator* obj = new RLEIterator(A);
 * int param_1 = obj->next(n);
 */

int main(int argc, char const *argv[])
{
	vector<int> nums{1,2,3,4};

	RLEIterator obj(nums);

	cout << obj.next(1) << endl;
	// cout << obj.next(2) << " " << obj.next(1) << " " << obj.next(1) << " " << obj.next(2) << " " << endl;

	return 0;
}