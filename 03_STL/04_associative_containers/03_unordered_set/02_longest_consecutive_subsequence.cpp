#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution{
  public:
    int findLongestConseqSubseq(int arr[], int n)
    {
        set<int> s;
        for(int i = 0; i < n; i++) s.insert(arr[i]);
        vector<int> nums(s.begin(), s.end());

        int subSeqLen = 0;
        int i = 0, start = 0;
        cout << nums.size() << endl;
        while(i < nums.size()-1){
            if(nums[i]+1 == nums[i+1]){
                i++;
            }
            else{
                subSeqLen = max(subSeqLen, i-start+1);
                i++;
                start = i;
            }
            cout << "hello ";
        }
        return max(subSeqLen, i-start+1);
    }
};

int main()
{
    int a[] = {1,3,4,5,6,7,8,9}, n = 8;
    Solution obj;
    cout << obj.findLongestConseqSubseq(a, n) << endl;

    return 0;
}
