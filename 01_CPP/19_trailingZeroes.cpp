/*find the traling zeroes in n!
Constraint: 1 <= n <= 10^9
*/
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int num = 40;
	int zeroesCount = 0;
	int i = 1;
	int val = 0;
	while (true){
		val = floor(num/pow(5, i));
		i++;
		if (val) zeroesCount += val;
		else break;
	}

	cout << zeroesCount << endl;
	return 0;
}