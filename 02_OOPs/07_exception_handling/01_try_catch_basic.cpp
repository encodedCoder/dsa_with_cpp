#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a = 10, b = 0, c;

	try{
		if(b == 0){
			string error_name = "Division by Zero Error";
			throw error_name;
		}
		c = a/b;
		cout << c << endl;
	}

	catch(string error_name){
		cout << error_name << endl;
	}
	catch(...){
		cout << "Some Error Happened" << endl;
	}
	return 0;
}
