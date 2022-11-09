// https://practice.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1
#include <iostream>
using namespace std;

class Solution{
public:
	// avoid space at the starting of the string in "move disk....."
	long long toh(int N, int src, int dst, int aux) {
		long long moves = 0;
		toh_helper(N, src, dst, aux, moves);
		return moves;
	}
	void toh_helper(int N, int src, int dst, int aux, long long& moves){
		if (N == 1){
			moves++;
			cout << "move disk " << 1 << " from rod " << src << " to rod " << dst << endl;
			return;
		}
		if (N > 0){
			toh_helper(N-1, src, aux, dst, moves);
			moves++;
			cout << "move disk " << N << " from rod " << src << " to rod " << dst << endl;
			toh_helper(N-1, aux, dst, src, moves);
		}
	}
};

int main() {
	// int N = 2;
	int N = 3;

	Solution ob;
	cout << ob.toh(N, 1, 3, 2) << endl;
	return 0;
}
