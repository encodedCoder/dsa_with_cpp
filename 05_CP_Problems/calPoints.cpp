#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> stk;
        for(string operation: operations){
            if(operation == "C"){
                stk.pop();
            }else if(operation == "D"){
                int topDouble = stk.top() * 2;
                stk.push(topDouble);
            }else if(operation == "+"){
                int val1 = stk.top(); stk.pop();
                int val2 = stk.top(); stk.pop();
                stk.push(val2);
                stk.push(val1);
                stk.push(val1 + val2);
            }else{
                stk.push(stoi(operation));
            }
        }
        int sum = 0;
        while(not stk.empty()){
            sum += stk.top();
            stk.pop();
        }
        return sum;
    }
};

int main(int argc, char const *argv[]){
    vector<string> ops = {"5","-2","4","C","D","9","+","+"};

    Solution obj;
    cout << obj.calPoints(ops) << endl;
    return 0;
}
