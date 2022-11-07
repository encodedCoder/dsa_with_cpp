#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<bool>> rowSets(9, vector<bool>(10, false));
        vector<vector<bool>> colSets(9, vector<bool>(10, false));
        vector<vector<bool>> boxSets(9, vector<bool>(10, false));
        for(int row = 0; row < 9; row++){
            for(int col = 0; col < 9; col++){
                if(board[row][col] == '.') continue;

                int curr = board[row][col]-48;
                if(rowSets[row][curr]) return false;
                else rowSets[row][curr] = true;
                
                if(colSets[col][curr]) return false;
                else colSets[col][curr] = true;
                
                int boxNumber = subBoxNumber(row, col);
                if(boxSets[boxNumber][curr]) return false;
                else boxSets[boxNumber][curr] = true;
            }
        }
        return true;
    }
    
    int subBoxNumber(int row, int col){
        if(row <= 2){
            if(col <= 2) return 0;
            else if(col <= 5) return 1;
            else return 2;
        }else if(row <= 5){
            if(col <= 2) return 3;
            else if(col <= 5) return 4;
            else return 5;
        }else{
            if(col <= 2) return 6;
            else if(col <= 5) return 7;
            else return 8;
        }
    }
};

int main(int argc, char const *argv[])
{
    vector<vector<char>> board = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };

    // vector<vector<char>> board = {
    //     {'8','3','.','.','7','.','.','.','.'},
    //     {'6','.','.','1','9','5','.','.','.'},
    //     {'.','9','8','.','.','.','.','6','.'},
    //     {'8','.','.','.','6','.','.','.','3'},
    //     {'4','.','.','8','.','3','.','.','1'},
    //     {'7','.','.','.','2','.','.','.','6'},
    //     {'.','6','.','.','.','.','2','8','.'},
    //     {'.','.','.','4','1','9','.','.','5'},
    //     {'.','.','.','.','8','.','.','7','9'}
    // };

    Solution obj;
    cout << obj.isValidSudoku(board) << endl;

    cout << "End" << endl;
    return 0;
}
