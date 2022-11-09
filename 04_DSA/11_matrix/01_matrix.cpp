#include <iostream>
#include <vector>
using namespace std;

class Matrix{
	vector<vector<int>> matrix;
public:
	Matrix () {}
	Matrix (vector<vector<int>> matrix) {
		for (int row = 0; row < matrix.size(); row++){
			matrix.push_back({});
			for (int col = 0; col < matrix[row].size(); col++){
				this->matrix[row].push_back(matrix[row][col]);
			}
		}
	}

	void display(){
		for (int row = 0; row < matrix.size(); row++){
			for (int col = 0; col < matrix[row].size(); col++){
				cout << matrix[row][col] << " ";
			} cout << endl;
		}
	}

	void operator+ (Matrix &matrix2){
		for (int row = 0; row < matrix.size(); ++row){
			for (int col = 0; col < matrix[row].size(); ++col){
				// matrix[row][col] += matrix2[row][col];
			}
		}
	}
	void transpose(){
		// 
	}
};

int main(int argc, char const *argv[])
{
	Matrix
	return 0;
}