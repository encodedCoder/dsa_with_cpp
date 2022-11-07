#include <iostream>
#include <deque>
using namespace std;

int main(int argc, char const *argv[])
{
	deque<int> dq = {10,15,30,5,12};
	// deque<int>::iterator itr = dq.begin();
	auto itr = dq.begin();
	itr++;
	itr = dq.insert(itr, 8);
	for(auto &ele : dq){cout << ele << " ";} cout << endl;
	dq.pop_front();
	dq.pop_back();
	for(auto &ele : dq){cout << ele << " ";} cout << endl;
	cout << dq.size() << endl;
	return 0;
}
