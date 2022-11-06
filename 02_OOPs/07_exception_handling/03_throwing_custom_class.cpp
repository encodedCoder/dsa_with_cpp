#include <iostream>
using namespace std;

class MyException:public exception{
public:
	string what(){
		return string("Error");
	}
};

int divide(int a, int b){
	if(b == 0){
		throw MyException();
	}
	return a/b;
}

int main(int argc, char const *argv[])
{
	int a = 5, b = 0;
	try{
		int c = divide(a,b);
		cout << c << endl;
	}
	catch(MyException myException){
		cout << myException.what() << endl;
	}
	return 0;
}
