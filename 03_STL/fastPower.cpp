#include <iostream>
#include <vector>
#define N 1000000007
using namespace std;

int fastPower(int num, int power){
    int res = 1;
    while(power){
        // when power is odd
        if(power&1)
            res = (res * num % N) % N;
        num = (num%N * num%N) % N;
        power = power >> 1;
    }
    return res;
}

int main(){
    cout << fastPower(542,244);
    return 0;
}
