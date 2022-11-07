#include <iostream>
#include <deque>
using namespace std;

class DataStructure{
	deque<int> dq;
public:
	DataStructure& insert_min(int data){
		dq.push_front(data);
		return *this;
	}
	DataStructure& insert_max(int data){
		dq.push_back(data);
		return *this;
	}
	int get_min(){
		return dq.front();
	}
	int get_max(){
		return dq.back();
	}
	DataStructure& extract_min(){
		dq.pop_front();
		return *this;
	}
	DataStructure& extract_max(){
		dq.pop_back();
		return *this;
	}
	void print(){
		for(auto itr = dq.begin(); itr != dq.end(); itr++){
			cout << (*itr) << " ";
		}
		cout << endl;
	}
};

int main(int argc, char const *argv[])
{
	DataStructure ds;
	ds.insert_min(5).print();
	ds.insert_max(10).print();
	ds.insert_min(3).print();
	ds.insert_min(2).print();
	ds.insert_max(15).print();
	cout << ds.get_min() << endl;
	cout << ds.get_max() << endl;
	ds.insert_min(1).print();
	cout << ds.get_min() << endl;
	ds.insert_max(20).print();
	cout << ds.get_max() << endl;
	ds.extract_min().print();
	return 0;
}
