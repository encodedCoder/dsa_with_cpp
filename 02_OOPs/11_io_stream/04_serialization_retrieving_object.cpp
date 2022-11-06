#include <iostream>
#include <fstream>
using namespace std;

class Student{
public:
	int roll_no;
	string name, branch;
	friend ifstream& operator>>(ifstream& in, Student &s);
	friend ostream& operator<<(ostream& out, Student &s);
};
ifstream& operator>>(ifstream &in, Student &s){
	in >> s.roll_no >> s.name >> s.branch;
	return in;
}
ostream& operator<<(ostream& out, Student &s){
	out << s.roll_no << endl;
	out << s.name << endl;
	out << s.branch << endl;
	return out;
}

int main(int argc, char const *argv[])
{
	Student s1;

	//Readind an object from file
	ifstream infile("Student.txt");
	infile >> s1;


	//check the contents of object;
	cout << s1 << endl;

	return 0;
}
