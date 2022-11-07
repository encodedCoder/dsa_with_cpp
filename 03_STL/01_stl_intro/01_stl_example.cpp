#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[] = {4,3,9,2,7,6,8,10};
	for(int ele : arr){cout << ele << " ";} cout << endl;

	int arr_length = sizeof(arr)/sizeof(int);
	sort(arr, arr + arr_length);
	for(int ele : arr){cout << ele << " ";} cout << endl;

	arr_length = sizeof(arr)/sizeof(int);
	bool present = binary_search(arr, arr + sizeof(arr)/sizeof(int), 7);
	if(present) cout << "Element Present in the Sorted array." << endl;
	else cout << "Element is not present in Sorted array." << endl;

	cout << typeid(present).name() << endl;
	cout << typeid(bool).name() << endl;

	return 0;
}
