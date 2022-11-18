#include "solution.cpp"

int main(){

#ifndef ONLINE_JUDGE
    freopen("errorf.err", "w", stderr);
#endif

    vector<int> nums{1,2,3,4,5,6};
    debug(nums);

    Solution obj;
    obj.prefixSum(nums);
    debug(nums);

    return 0;
}
