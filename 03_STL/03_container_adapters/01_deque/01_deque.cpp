#include <iostream>
#include <deque>
using namespace std;

int main(int argc, char const *argv[])
{
	deque<int> dq = {10,20,30};
	dq.push_front(5);
	dq.push_back(50);
	for(auto &ele : dq){cout << ele << " ";} cout << endl;
	return 0;
}
