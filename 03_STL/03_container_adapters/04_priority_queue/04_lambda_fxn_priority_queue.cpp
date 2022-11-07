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

int main(int argc, char const *argv[])
{
	auto compare = [](Person& p1, Person& p2){return p1.height < p2.height;};
	priority_queue<Person, vector<Person>, decltype(compare)> pq(compare);

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
