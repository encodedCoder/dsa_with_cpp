#include <iostream>
#include<vector>
using namespace std;

void LU_decompose(vector<vector<int>> matrix);
void print_matrix(vector<vector<int>> matrix);

int main(int argc, char const *argv[]){
	// vector<vector<int>> matrix = {{1,2,4}, {3,8,14}, {2,6,13}};
	vector<vector<int>> matrix = {{2,5,9}, {4,6,5}, {8,2,3}};
	// vector<vector<int>> matrix = {{1,2,3}, {1,3,4}, {2,4,6}};
	cout << "Before decomposition original matrix: " << endl;
	print_matrix(matrix);

	LU_decompose(matrix);
	return 0;
}

void LU_decompose(vector<vector<int>> matrix){
	vector<vector<int>> lower, upper;

	lower = {{1,0,0},{1,1,0},{1,1,1}};
	upper = {matrix[0],{0,1,1},{0,0,1}};

	lower[1][0] = matrix[1][0] / upper[0][0];
	upper[1][1] = matrix[1][1] - lower[1][0]*upper[0][1];
	upper[1][2] = matrix[1][2] - lower[1][0]*upper[0][2];

	lower[2][0] = matrix[2][0] / upper[0][0];
	lower[2][1] = (matrix[2][1] - lower[2][0]*upper[0][1]) / upper[1][1];
	upper[2][2] = matrix[2][2] - lower[2][0]*upper[0][2] - lower[2][1]*upper[2][1];

	cout << "Decomposed matrices: " << endl;
	cout << "Lower Triangular Matrix: " << endl;
	print_matrix(lower);

	cout << "Upper Triangular Matrix: " << endl;
	print_matrix(upper);
}

void print_matrix(vector<vector<int>> matrix){
	for (auto row : matrix){
		for (auto element : row){
			cout << element << " ";
		} cout << endl;
	} cout << endl;
}

