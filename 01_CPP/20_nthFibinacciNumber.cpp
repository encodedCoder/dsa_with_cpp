#include<iostream>
using namespace std;

int nthFibonacci(int n, int prev, int curr){
	if (n > 0){
		int temp = curr;
		curr += prev;
		prev = temp;
		return nthFibonacci(n-1, prev, curr);
	}
	return prev;
}

int main() {
	int n = 5;
	cout << nthFibonacci(n-1, 0, 1) << endl;
	return 0;
}