#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[] = {5,3,6,5,2,7};
	cout << "array: "; for(int i = 0; i < 6; i++){cout << arr[i] << " ";}cout << endl;

	vector<int> vec{5,3,6,5,2,7};
	cout << "vecot: "; for(auto& ele : vec){cout << ele << " ";}cout << endl;

	priority_queue<int> pq1(arr, arr+6);
	priority_queue<int, vector<int>, greater<int>> pq2(vec.begin(), vec.end());

	while(!pq1.empty()){cout << pq1.top() << " "; pq1.pop();}cout << endl;

	while(!pq2.empty()){cout << pq2.top() << " "; pq2.pop();}cout << endl;

	return 0;
}
