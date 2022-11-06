#include <iostream>
using namespace std;

namespace first{
	void fun(){
		cout << "first" << endl;
	}
}

namespace second{
	void fun(){
		cout << "second" << endl;
	}
}

void fun(){
	cout << "without namespace" << endl;
}

int main(int argc, char const *argv[])
{
	fun();
	first::fun();
	second::fun();
	return 0;
}
