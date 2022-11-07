#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> v = {10,20,30,40,50};
	// vector<int>::iterator itr = v.begin();
	auto itr = v.begin();

	itr = next(itr, 2);
	cout << *itr << endl;

	itr++;
	cout << *itr << endl;

	itr = v.end();
	itr = prev(itr, 2);
	cout << *itr << endl;
	return 0;
}
