#include<iostream>
using namespace std;
int main() {
	int arr2D[3][3] = {0};
	int val = 1;
	for(int row = 0; row < 3; row++){
		for(int column = 0; column < 3; column++){
			arr2D[row][column] = val;
			val++;
			cout << arr2D[row][column] << " ";
		}
		cout << endl;
	}
	return 0;
}