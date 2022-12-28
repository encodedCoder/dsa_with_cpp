#include <bits/stdc++.h>
using namespace std;

// O(N + KlogN) Time and O(N) Space --> Max Heap
class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        for(int pile: piles){pq.push(pile);}
        while(k--){
            int top = ceil(pq.top()/2.0); pq.pop();
            pq.push(top);
        }
        int totalStones = 0;
        while(not pq.empty()){totalStones += pq.top(); pq.pop();}
        return totalStones;
    }
};

int main(int argc, char const *argv[])
{
  Solution obj;
  int k = 2; vector<int> piles = {5,4,9};
  cout << obj.minStoneSum(piles, k) << endl;
  return 0;
}
