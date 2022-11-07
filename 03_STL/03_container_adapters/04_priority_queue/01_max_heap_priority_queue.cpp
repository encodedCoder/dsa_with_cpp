#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char const *argv[])
{
	priority_queue<int> pq;
	pq.push(52);
	pq.push(23);
	pq.push(68);
	pq.push(42);

	cout << pq.top() << endl;
	pq.pop();

	pq.push(12);

	while(not pq.empty()){
		cout << pq.top() << " "; pq.pop();
	}cout << endl;
	return 0;
}
