#include<iostream>
#include<unordered_map>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) {
    unordered_map<int,int> mp;
    for(int i = 0; i < n; i++) mp[a1[i]]++;
    for(int i = 0; i < m; i++){
        cout << mp[a2[i]] << " ";
        if(mp.count(a2[i]) == 0) return "No";
        if(mp.count(a2[i]) and mp[a2[i]] == 0) return "No";
        mp[a2[i]]--;
    }
    return "Yes";
}

int main(int argc, char const *argv[])
{
    int a1[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int a2[4] = {1, 2, 3, 1};
    
    cout << isSubset(a1, a2, 8, 4);
    return 0;
}
