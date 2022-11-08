#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int nums[] = {5,8,3,4,6,9,1,7,2};
    for (auto num: nums){
        cout << num << " ";
    }
    cout << endl;

    sort(nums, nums + (end(nums)-begin(nums)));
    for (auto num: nums){
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}