#include<iostream>
#include<vector>
using namespace std;

int getAbsSum(std::vector<int> arr) {
	int sum = 0, currNum = 0;
	for (int i = 0; i < end(arr)-begin(arr); ++i){
		currNum = arr[i];
		if (currNum < 0){
			currNum *= -1;
		}
		sum += currNum;
	}
	return sum;
}

int main() {
	std::vector<int> arr{2, -1, -3, 4, 8};
	cout << getAbsSum(arr) << endl;
	return 0;
}