#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> v1{10,20,30,5,5};
	vector<int> v2{20,10,5,30,20};
	if (is_permutation(v1.begin(), v1.end(), v2.begin())){cout << "yes" << endl;}
	else {cout << "no" << endl;}

	int arr1[] = {10,20,30,5};
	int arr2[] = {20,10,5,30};
	if (is_permutation(arr1, arr1+4, arr2)){cout << "yes" << endl;}
	else {cout << "no" << endl;}

	return 0;
}
