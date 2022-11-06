#include <iostream>
using namespace std;

class StackOverFlow:public exception{};
class StackUnderFlow:public exception{};

class Stack{
	int size;
	int top;
	int *stack;
public:
	Stack(int size){
		this->top = -1;
		this->size = size;
		stack = new int[size];
	}

	void push(int data){
		if (top == size){
			throw StackOverFlow();
		}
		stack[++top] = data;
	}

	int pop(){
		if(top == -1){
			throw StackUnderFlow();
		}
		return stack[top--];
	}
};

int main(int argc, char const *argv[])
{
	Stack stack(5);

	try{
		stack.push(8);
		stack.push(3);
		stack.push(4);
		stack.push(9);
		stack.push(7);
		stack.push(74);
		stack.push(74);
		stack.pop();
	}
	catch(StackOverFlow s){
		cout << "StackOverFlow " << s.what() << endl;
	}
	catch(StackUnderFlow s){
		cout << "StackUnderFlow " << s.what() << endl;
	}
	catch(...){
		cout << "Some Error" << endl;
	}

	return 0;
}
