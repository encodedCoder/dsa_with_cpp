#include<iostream>
using namespace std;

float squareRoot(int num, int decimalPrecision){
	float square_root, decimalPart;

	int naturalPart = 0;
	while (naturalPart*naturalPart <= num){
		naturalPart++;
	}
	square_root = --naturalPart;

	if (square_root*square_root == num){
		return square_root;
	}

	decimalPart = 1;
	int counter;
	for (; decimalPrecision > 0; --decimalPrecision)
	{
		decimalPart /= 10;
		for (counter = 1; counter <= 9; ++counter){
			square_root += decimalPart;
			if (square_root*square_root > num){
				square_root -= decimalPart;
				break;
			}
		}
	}
	return square_root;
}	

int main(int argc, char const *argv[])
{
	int num = 10;
	// cin >> num;
	int decimalPrecision = 10;
	// cin << decimalPrecision;
	cout << squareRoot(num, decimalPrecision) << endl;
	return 0;
}
