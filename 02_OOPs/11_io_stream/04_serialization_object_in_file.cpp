// #include <iostream>
#include <fstream>
using namespace std;

class Student{
public:
	int roll_no;
	string name, branch;
	friend ofstream& operator<<(ofstream &out, Student &s);
};
ofstream& operator<<(ofstream &out, Student &s){
	out << s.roll_no << endl;
	out << s.name << endl;
	out << s.branch << endl;
	return out;
}

int main(int argc, char const *argv[])
{
	//Writing an object to text file
	Student s1 = {21814, "Suresh", "IT"};

	ofstream outfile("Student.txt", ios::trunc);

	outfile << s1;
	outfile.close();

	return 0;
}
