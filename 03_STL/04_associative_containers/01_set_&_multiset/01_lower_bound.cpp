#include <iostream>
#include <set>
using namespace std;

int main()
{
	set<int> s{10,2,5,7,6,15,14};
	for(const auto& ele: s){cout << ele << " ";} cout << endl;

	auto it = s.lower_bound(15);
	if(it != s.end()){cout << *it << endl;}
	else{cout << "Not Found" << endl;}

	it = s.lower_bound(8);
	if(it != s.end()){cout << *it << endl;}
	else{cout << "Not Found" << endl;}

	it = s.lower_bound(20);
	if(it != s.end()){cout << *it << endl;}
	else{cout << "Element greater than greatest element" << endl;}

	return 0;
}



