#include <iostream>
using namespace std;

template <class type>
class Stack{
	int top;
	int size;
	type *stack;
public:
	Stack(int size = 10){
		this->top = -1;
		this->size = size;
		this->stack = new type[size];
	}
	void push(type data){
		if(top == size-1){cout << "StackOverFlow";}
		else{stack[++top] = data;}
	}
	type pop(){
		if(top == -1){cout << "StackUnderFlow"; return;}
		else{return stack[top--];}
	}
	~Stack(){delete stack;}
};

int main(int argc, char const *argv[])
{
	Stack<int> stack1;
	Stack<string> stack2;
	Stack<float> stack3;
	return 0;
}
