#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int nums[] = {5,10,7,10,20};

	int *ptr = find(nums, nums+5, 20);

	if(ptr != nums+5) cout << "Found at index: " << ptr-nums << endl;
	else cout << "Not found." << endl;
	return 0;
}
