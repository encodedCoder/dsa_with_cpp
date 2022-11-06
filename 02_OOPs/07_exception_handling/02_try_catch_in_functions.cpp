#include <iostream>
using namespace std;

int divide(int a, int b){
	if(b == 0){
		string error_name = "Division by Zero Error";
		throw  error_name;
	}
	return a/b;
}

int main(int argc, char const *argv[])
{
	int a = 20, b = 0;
	try{
		int c = divide(a,b);
		cout << c << endl;
	}
	catch(string e_name){
		cout << e_name << endl;
	}
	cout << "Bye" << endl;
	return 0;
}
