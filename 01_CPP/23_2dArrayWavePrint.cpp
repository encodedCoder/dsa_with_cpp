#include<iostream>
using namespace std;

void print2Darray(int arr2D[][3], int rows, int columns){
	for (int row = 0; row < rows; ++row){
		for (int column = 0; column < columns; ++column){
			cout << arr2D[row][column] << " ";
		}
		cout <<endl;
	}
	cout << endl;
}

void wavePrint2Darray(int arr2D[][3], int rows, int columns){
	bool topToBottom = true;
	for (int column = 0; column < columns; ++column){
		if (topToBottom){
			for (int row = 0; row < rows; ++row){
				cout << arr2D[row][column] << " ";
			}
			topToBottom = false;
		}
		else{
			for (int row = rows-1; row >= 0; --row){
				cout << arr2D[row][column] << " ";
			}
			topToBottom = true;
		}
		cout << endl;
	}
}

int main() {
	int arr2D[3][3] = {1,2,3,4,5,6,7,8,9};
	int rows = 3;
	int columns = 3;

	print2Darray(arr2D, rows, columns);
	wavePrint2Darray(arr2D, rows, columns);
	return 0;
}