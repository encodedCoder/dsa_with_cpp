#include <iostream>
#include <cstdlib>
using namespace std;

class Student{
	int roll_no;
	string name;
	int *marks = new int[3];
public:
	Student(int roll_no, string name, int mark0, int mark1, int mark2){
		this->roll_no = roll_no;
		this->name = name;
		this->marks[0] = mark0;
		this->marks[1] = mark1;
		this->marks[2] = mark2;
	}
	~Student(){
		delete this->marks;
		cout << "Student " << this->name << " destroyed" << endl;
	}
	void setRollNo(int roll_no){this->roll_no = roll_no;}
	void setName(string name){this->name = name;}
	void setMarks(int mark0, int mark1, int mark2){
		this->marks[0] = mark0;
		this->marks[1] = mark1;
		this->marks[2] = mark2;
	}
	void setMark1(int mark0){this->marks[0] = mark0;}
	void setMark2(int mark1){this->marks[1] = mark1;}
	void setMark3(int mark2){this->marks[2] = mark2;}

	int getRollNo(){return this->roll_no;}
	string getName(){return this->name;}
	int getMark1(){return this->marks[0];}
	int getMark2(){return this->marks[1];}
	int getMark3(){return this->marks[2];}

	int total_marks(){return (this->marks[0] + this->marks[1] + this->marks[2]);}
	char grade(){
		int percentage = ((this->total_marks()) / 3.0);
		if (percentage >= 90){return 'A';}
		else if(percentage >= 80){return 'B';}
		else if(percentage >= 70){return 'C';}
		else if(percentage >= 60){return 'D';}
		else if(percentage >= 50){return 'E';}
		else {return 'F';}
	}
};

int main(int argc, char const *argv[])
{
	Student student1(1, "Suresh", 65, 78, 82);
	cout << "Roll no: " << student1.getRollNo() << endl;
	cout << "Name: " << student1.getName() << endl;
	cout << "Marks 1: " << student1.getMark1() << endl;
	cout << "Marks 2: " << student1.getMark2() << endl;
	cout << "Marks 3: " << student1.getMark3() << endl;

	cout << "Total Marks: " << student1.total_marks() << endl;
	cout << "Grade: " << student1.grade() << endl;
	return 0;
}
