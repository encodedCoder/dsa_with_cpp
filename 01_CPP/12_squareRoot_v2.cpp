#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int num = 10, precision = 3;
	// cin >> num >> precision;

	float squareRoot = 0;
	float increment = 1.0;

	for (int count = 0; count <= precision; ++count)
	{
		while (squareRoot * squareRoot <= num){
			squareRoot += increment;
		}
		squareRoot -= increment;
		increment /= 10;
	}

	cout << squareRoot << endl;
}
