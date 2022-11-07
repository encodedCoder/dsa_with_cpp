#include <iostream>
#include <set>
// #include <limits>
using namespace std;

class DataStructure{
	set<int> s;
public:
	bool search(int val){return s.find(val) != s.end();}
	void insert(int val){s.insert(val);}
	void delet(int val){s.erase(val);}
	int getFloor(int val){
		if(s.count(val)) return val;
		auto itr = s.lower_bound(val);
		if(itr != s.begin()) return *--itr;
		else return INT_MIN;
	}
	int getCeiling(int val){
		if(s.count(val)) return val;
		auto itr = s.upper_bound(val);
		if(itr != s.end()) return *itr;
		else return INT_MAX;
	}
};

int main(int argc, char const *argv[])
{
	DataStructure ds;
	ds.insert(10);
	ds.insert(20);
	ds.insert(15);
	ds.insert(5);
	ds.insert(25);
	cout << ds.search(15) << " ";
	ds.delet(15);
	cout << ds.search(15) << " ";
	cout << ds.getFloor(6) << " ";
	cout << ds.getFloor(5) << " ";
	cout << ds.getCeiling(6) << " ";
	cout << ds.getCeiling(25) << " ";
	cout << ds.getCeiling(100) << " ";
	cout << ds.getFloor(1) << " ";
	cout << ds.getFloor(26) << " ";
	cout << endl;
	return 0;
}
