#include <iostream>
#include <fstream>
using namespace std;

struct Student{
	int roll_no;
	string name;
};

int main(int argc, char const *argv[])
{
	ofstream wf("student.dat", ios::out | ios::binary);
	if(not wf.is_open()){cout << "Cannot Open File" << endl; return 1;}

	Student s1 = {21814, "Suresh"};
	wf.write((char *) &s1, sizeof(Student));

	// wf.write(reinterpret_cast<const char *>(23), sizeof(int));
	cout << "bye\n";
	return 0;
}
