#include <iostream>
#include <vector>
using namespace std;

long long fibonacciWithoutDP(int n) {
	if (n == 0 or n == 1) return n;
	return fibonacciWithoutDP(n-1) + fibonacciWithoutDP(n-2);
}

long long fibonacciTopDownDP(int n) {
	static vector<long long> values(n+1);
	if (n == 0 or n == 1) {
		values[n] = n;
		return n;
	}
	if (values[n]) return values[n];

	fibonacciTopDownDP(n-1);
	fibonacciTopDownDP(n-2);
	values[n] = values[n-1] + values[n-2];

	return values[n];
}

long long fibonacciBottomUpDP(int n) {
	vector <long long> values(n+1);
	values[0] = 0;
	values[1] = 1;
	for (int i = 2; i <= n; i++) {
		values[i] = values[i-1] + values[i-2];
	}
	return values[n];
}

int main(int argc, char const *argv[])
{
	// cout << fibonacciWithoutDP(50) << endl;
	// cout << fibonacciTopDownDP(50) << endl;
	cout << fibonacciBottomUpDP(50) << endl;

	return 0;
}

