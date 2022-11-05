/*
https://hack.codingblocks.com/app/contests/1161/1051/problem
*/

#include<iostream>
using namespace std;

void isPiyushLostInPark(char [][1000], int, int, int, int);

int main() {
	char chrs[1000][1000]; 

	int N, M, K, S;
	cin >> N >> M >> K >> S;

	for (int row = 0; row < N; row++)
		for (int col = 0; col < M; col++)
			cin >> chrs[row][col];

	isPiyushLostInPark(chrs, N, M, K, S);
	return 0;
}

void isPiyushLostInPark(char chrs[][1000], int N, int M, int K, int S){
	for (int row = 0; row < N; ++row){
		for(int col = 0; col < M; col++){
			if (S > K){
				switch(chrs[row][col]){
					case '.':
						if (col != M-1)
							S -= 3; 
						else
							S -= 2;
						break;
					case '*':
						if (col != M-1)
							S += 4; 
						else
							S += 5;
						break;
					case '#':
						col += M; break; 
				}
			}
			else{
				break;
			}
		}
	}

	if (S > K){
		cout << "Yes" << endl << S << endl;;
	}
	else{
		cout << "no " << endl;
	}
}