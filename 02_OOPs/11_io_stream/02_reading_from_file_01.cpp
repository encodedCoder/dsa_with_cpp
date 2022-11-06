#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
	ifstream infile("my_text.txt");

	if(not infile.is_open()) {
		cout << "File cannot be opened";
	}else{
		string name;
		string roll_no;
		string branch;

		infile >> name >> roll_no >> branch;

		cout << name << " " << roll_no << " " << branch << endl;
	}
	return 0;
}
