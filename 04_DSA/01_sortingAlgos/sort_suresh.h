#include <cstddef>
#include <algorithm>
using namespace std;


bool default_compare(int a, int b){
	return a > b;
}

void bubble_sort(int arr[], int arr_length, bool (&compare)(int a, int b)){
	for(int i = 1; i < arr_length; ++i) {
		for(int j = 0; j < arr_length-i; ++j) {
			if(compare(arr[j], arr[j + 1])){
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

void bubble_sort(int arr[], int arr_length){
	for(int i = 1; i < arr_length; ++i) {
		for(int j = 0; j < arr_length-i; ++j) {
			if(default_compare(arr[j], arr[j + 1])){
				swap(arr[j], arr[j + 1]);
			}
		}
	}	
}