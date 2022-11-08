#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int nums[] = {5,8,3,4,6,9,1,7,2};
    for (auto num: nums){
        cout << num << " ";
    }
    cout << endl;

    sort(begin(nums), end(nums));
    for (auto num: nums){
        cout << num << " ";
    }
    cout << endl;

    if ( binary_search(begin(nums), end(nums), 8) ){
    	cout << "Element present." << endl;
    }
    else{
    	cout << "Element not present." << endl;
    }
    
    return 0;
}

// ( binary_search(nums, nums + (end(nums)-begin(nums)), 8) )