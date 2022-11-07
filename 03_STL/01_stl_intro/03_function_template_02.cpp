#include <iostream>
using namespace std;

template <typename T>
T max_(const T &x, const T &y){return x>y?x:y;}

template <typename T>
T max_in_array(const T arr[], const int array_length){
	T max_ele = arr[0];
	for(int i = 0; i < array_length; i++){
		max_ele = max_(max_ele, arr[i]);
	}
	return max_ele;
}

int main(int argc, char const *argv[]){
	int nums[] = {4,3,8,2,9,6};
	char chrs[] = {'b', 'y', 'd', 't'};
	string strs[] = {"suresh", "prem", "preeta", "sunny", "surender"};

	int array_length = sizeof(nums)/sizeof(int);
	cout << max_in_array(nums, array_length) << endl;

	array_length = sizeof(chrs)/sizeof(char);
	cout << max_in_array(chrs, array_length) << endl;

	array_length = sizeof(strs)/sizeof(string);
	cout << max_in_array(strs, array_length) << endl;
	return 0;
}
