#include <iostream>
using namespace std;

class Stack{
	int top;
	int size;
	int *stack;
public:
	Stack(int size){
		this->top = -1;
		this->size = size;
		this->stack = new int[size];
	}
	void push(int data){stack[++top] = data;}
	int pop(){return stack[top--];}
};

int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}
