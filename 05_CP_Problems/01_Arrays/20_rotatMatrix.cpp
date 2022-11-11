#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {         
        int first = 0;
        int last = matrix.size()-1;
        while (first < last) {
            int i = first;
            int j = last;
            while (i < last) {
                int copy1 = matrix[first][i];
                int copy2 = matrix[i][last];
                int copy3 = matrix[last][j];
                int copy4 = matrix[j][first];

                matrix[i][last]  = copy1;
                matrix[last][j]  = copy2;
                matrix[j][first] = copy3;
                matrix[first][i] = copy4;

                i++;
                j--;
            }
            first++;
            last--;
        }
    }
};

int main(int argc, char const *argv[]){
    // vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> matrix = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};

    // print matrix before rotation
    for (int row = 0; row < matrix.size(); ++row){
        for (int col = 0; col < matrix[0].size(); ++col) {
            printf("%2d ", matrix[row][col]);
        }
        cout << endl;
    } cout << endl;

    Solution obj;
    obj.rotate(matrix);

    // print matrix after rotation
    for (int row = 0; row < matrix.size(); ++row){
        for (int col = 0; col < matrix[0].size(); ++col) {
            printf("%2d ", matrix[row][col]);
        }
        cout << endl;
    } cout << endl;
    return 0;
}