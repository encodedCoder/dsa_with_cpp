#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> nums{5,10,7,10,20};

	auto itr = find(nums.begin(), nums.end(), 101);

	if(itr != nums.end()) cout << "Found at index: " << itr-nums.begin() << endl;
	else cout << "Not found." << endl;
	return 0;
}
