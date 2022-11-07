#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> v = {10,20,30,40,50};
	// vector<int>::iterator itr = v.begin();
	auto itr = v.begin();

	cout << *itr << endl;
	itr++;
	cout << *itr << endl;
	itr = v.end();
	itr--;
	cout << *itr << endl;
	return 0;
}
