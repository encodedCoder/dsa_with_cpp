#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;

// class Solution {
// public:
//     vector<string> findWords(vector<string>& words) {
//         vector<unordered_set<char>> rows{
//             {'q','w','e','r','t','y','u','i','o','p'},
//             {'a','s','d','f','g','h','j','k','l'},
//             {'z','x','c','v','b','n','m'}};
//         vector<string> result;
//         for(auto word : words){
//             int currRow;
//             bool correctWord = true;
//             char firstLetter = word[0];
//             if(firstLetter < 97) firstLetter += 32;
//             if(rows[0].count(word[0])) currRow = 0;
//             else if(rows[1].count(word[0])) currRow = 1;
//             else currRow = 2;
//             for(char c : word){
//                 if(rows[currRow].count(c)) {correctWord = false; break;}
//             }
//             if(correctWord) result.push_back(word);
//         }
//         return result;
//     }
// };

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set<char> row1{'q','w','e','r','t','y','u','i','o','p'};
        unordered_set<char> row2{'a','s','d','f','g','h','j','k','l'};
        unordered_set<char> row3{'z','x','c','v','b','n','m'};

        vector<string> result;
        for(auto word : words){
            unordered_set<char>* currRow;
            bool correctWord = true;
            char firstLetter = word[0];
            if(firstLetter < 97) firstLetter += 32;
            if(row1.count(firstLetter)) currRow = &row1;
            else if(row2.count(firstLetter)) currRow = &row2;
            else currRow = &row3;
            for(char c : word){
                if(c < 97) c += 32;
                if(currRow->count(c)) {continue;}
                else {correctWord = false; break;}
            }
            if(correctWord) result.push_back(word);
        }
        return result;

    }
};

int main(int argc, char const *argv[]){
    vector<string> words{"Hello","Alaska","Dad","Peace"};

    Solution obj;
    for(auto word : obj.findWords(words)){
        cout << word << ' ';
    } cout << endl;

    return 0;
}
