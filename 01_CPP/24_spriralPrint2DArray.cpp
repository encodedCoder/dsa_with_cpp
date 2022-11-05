#include<iostream>
#define ROWS 3
#define COLS 3
using namespace std;

// Function declarations
	void doPrinting(int [][COLS], int, int);
	void print2DArray(int [][COLS], int, int);
	void spiralPrint2DArray(int [][COLS], int, int);

int main() {
	// int arr[2][2] = {1,2,3,4};
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
	// int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	// int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	// int arr[5][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};

	doPrinting(arr, ROWS, COLS);

	return 0;
}

void spiralPrint2DArray(int arr[][COLS], int rows, int cols){
	int row = 0, col = 0, counter = 0;
	while (rows and cols){
		if (cols){
			while(counter < cols){
				cout <<  arr[row][col++] << " ";
				counter++;
			}
			rows--;

			col--;
			row++;
			counter = 0;
		}
		if (rows){
			while(rows and counter < rows){
				cout << arr[row++][col] << " ";
				counter++;
			}
			cols--;

			row--;
			col--;
			counter = 0;
		}
		if (cols){
			while(counter < cols){
				cout << arr[row][col--] << " ";
				counter++;
			}
			rows--;

			col++;
			row--;
			counter = 0;
		}
		if (rows){
			while(counter < rows){
				cout << arr[row--][col] << " ";
				counter++;
			}
			cols--;

			row++;
			col++;
			counter = 0;
		}
	}
	cout << endl;
}

void doPrinting(int arr[][COLS], int rows, int cols){
	// print2DArray(arr, ROWS, COLS);
	spiralPrint2DArray(arr, ROWS, COLS);
}

void print2DArray(int arr[][COLS], int rows, int cols){
	for (int row = 0; row < rows; ++row){
		for (int col = 0; col < cols; ++col){
			printf("%2d ", arr[row][col]);
			// cout << arr[row][col] << " ";
		}
		cout << endl;
	} 
}