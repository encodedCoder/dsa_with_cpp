#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> nums;
	nums = {12, 20, 56, 89, 14, 61, 37};

	for(auto& num: nums){cout << num << " ";}
	cout << endl;

	for(vector<int>::iterator itr = nums.begin(); itr != nums.end(); itr++){cout << *itr << " ";}
	cout << endl;

	return 0;
}
