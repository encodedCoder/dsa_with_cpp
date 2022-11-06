#include <iostream>
using namespace std;

class ArraySizeZeroException: public exception{};
class ArraySizeNegativeException: public exception{};

double average(double* arr, int n){
	double sum = 0;
	if(n == 0) throw ArraySizeZeroException();
	if(n < 0) throw ArraySizeNegativeException();
	for (int i = 0; i < n; ++i){sum += arr[i];}
	return (sum/n);
}

int main(int argc, char const *argv[]){
	int n = 5;
	double arr[n] = {4,3,9,2,6};
	try{
		cout << average(arr, -5);
	}
	catch(ArraySizeZeroException& e){
		cout << e.what() << ": ArraySizeZeroException" << endl;
	}
	catch(ArraySizeNegativeException& e){
		cout << e.what() << ": ArraySizeNegativeException" << endl;
	}
	return 0;
}
