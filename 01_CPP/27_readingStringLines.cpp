#include<iostream>
using namespace std;
int main() {
    char chrs[100][1000];

    for (int i = 0; i < 3; ++i) {
        // cin.getline(chrs[i], 1000);
        cin >> chrs[i];
    }

    for (int row = 0; row < 3; ++row){
        cout << chrs[row] << endl;
    }
    return 0;
}