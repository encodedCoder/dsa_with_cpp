#include <iostream>
#include <stack>
using namespace std;

template <typename T>
class SpecialStack{
	stack<T> s;
	T minimum;
public:
	void push(T data){s.push(data);}
	void pop(){}
	T top(){return s.top();}
	T getMin(){}
}
