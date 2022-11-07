#include <iostream>
#include <string>
#include <list>
using namespace std;

class Solution {
public:
    string multiply(string num1, string num2) {
        list<int> n1, n2;
        for(int i = num1.length()-1; i >= 0; i-=4){
            int start = i-3 >= 0 ? i-3 : 0;
            int end = i+1;
            string currNum(num1.begin()+start, num1.begin()+end);
            n1.push_front(stoi(currNum));
        }
        for(int i = num2.length()-1; i >= 0; i-=4){
            int start = i-3 >= 0 ? i-3 : 0;
            int end = i+1;
            string currNum(num2.begin()+start, num2.begin()+end);
            n2.push_front(stoi(currNum));
        }
        // Print Lists
            // for(auto itr = n1.begin(); itr != n1.end(); itr++){
            //     cout << *itr << ' ';
            // }cout << endl;
            // for(auto itr = n2.begin(); itr != n2.end(); itr++){
            //     cout << *itr << ' ';
            // }cout << endl;

        list<int> ans;
        int count = 0, countCopy = 0;
        int product = 1, carry = 0, remainder = 0;
        for(auto i = n2.rbegin(); i != n2.rend(); i++){
            auto k = ans.rbegin();
            while(count--) k++;
            count = ++countCopy;
            int currNum = (*i);
            int digits = 4;
            int offset = 1;
            while(digits--){
                int currDigit = currNum % 10;
                currNum /= 10;
                for(auto j = n1.rbegin(); j != n1.rend(); j++){
                    product = (*j) * currDigit * offset + (carry + remainder);
                    if(k == ans.rend()){
                        ans.push_front(product % 10000);
                    }
                    else{
                        *k += product;
                        product = *k;
                        ans.push_front(product % 10000);
                        carry = product / 10000;
                    }
                    k++;
                    remainder = product / 10000;
                }
                offset *= 10;
            }
        }
        string ansString;
        for(auto i = ans.begin(); i != ans.end(); i++){
            ansString.append(to_string(*i));
        }
        return ansString;
    }
};

int main(int argc, char const *argv[]){
    string num1 = "2", num2 = "3";
    // string num1 = "20", num2 = "34";
    // string num1 = "12345678", num2 = "12345678";

    // string num1 = "12345678912345678912345678912345678912345678912345678912345678912345678912345678912345678912345678912345678912345678912345678912345678912345678912345678912345678912345678912345678912345678912345678912", num2 = "12345678912345678912345678912345678912345678912345678912345678912345678912345678912345678912345678912345678912345678912345678912345678912345678912345678912345678912345678912345678912345678912345678912";

    Solution obj;
    cout << obj.multiply(num1, num2) << endl;

    return 0;
}
