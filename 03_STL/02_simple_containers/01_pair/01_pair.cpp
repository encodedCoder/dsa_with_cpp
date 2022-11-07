#include <iostream>
#include <utility>
using namespace std;

int main(int argc, char const *argv[])
{
	pair<int, string> p1;
	p1.first = 0;
	p1.second = "suresh";

	cout << p1.first << ": " << p1.second << endl;

	p1 = {1, "prem"};
	cout << p1.first << ": " << p1.second << endl;
	return 0;
}
