#include <bits/stdc++.h>
using namespace std;

// O(NlogN) Time and O(1) Space --> Sorting and Greedy Approach
class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n = capacity.size();
        for(int i = 0; i < n; i++){capacity[i] -= rocks[i];}
        sort(capacity.begin(), capacity.end());
        int fullBags = 0;
        for(int c: capacity){
            if(c > additionalRocks) break;
            fullBags++;
            additionalRocks -= c;
        }
        return fullBags;
    }
};

int main(int argc, char const *argv[])
{
  vector<int> capacity = {2,3,4,5}, rocks = {1,2,4,4};
  int additionalRocks = 2;

  Solution obj;
  cout << obj.maximumBags(capacity, rocks, additionalRocks);
  return 0;
}
