#include <iostream>
#include <queue>
using namespace std;

struct Person{
	string name;
	int age;
	float height;
	Person(string n, int a, float h){
		name = n;
		age = a;
		height = h;
	}
};

struct mycompare{
	bool operator()(Person const& p1, Person const& p2){
		return p1.height > p2.height;
	}
};

int main(int argc, char const *argv[])
{
	priority_queue<Person, vector<Person>, mycompare> pq;

	Person p1("Suresh", 24, 5.8), p2("Prem", 26, 5.5), p3("Preeta", 28, 5.3);
	pq.push(p1); pq.push(p2); pq.push(p3);

	// cout << typeid(p1).name() << endl;
	// cout << typeid(pq.top()).name() << endl;
	while(not pq.empty()){
		Person p = pq.top();
		cout << p.name << " " << p.age << " " << p.height << endl;
		pq.pop();
	}
	return 0;
}
