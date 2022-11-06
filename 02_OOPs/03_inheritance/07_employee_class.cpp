#include <iostream>
using namespace std;

class Employee{
	int eID;
	string name;
public:
	Employee(){}
	Employee(int eID, string name){
		this->eID = eID;
		this->name = name;
	}
	Employee(Employee &employee){
		this->eID = employee.eID;
		this->name = employee.name;
	}
	void setName(string name){this->name = name;}
	void setEID(int eID){this->eID = eID;}
	string getName(){return this->name;}
	int getEID(){return this->eID;}
	~Employee(){}
};

class FullTimeEmployee:public Employee{
	float salary;
public:
	FullTimeEmployee(){}
	FullTimeEmployee(int eID, string name, float salary):Employee(eID, name){
		this->salary = salary;
	}
	FullTimeEmployee(FullTimeEmployee &fullTimeEmployee){
		this->setName(fullTimeEmployee.getName());
		this->setEID(fullTimeEmployee.getEID());
		this->salary = fullTimeEmployee.salary;
	}
	void setSalary(float salary){this->salary = salary;}
	float getSalary(){return this->salary;}
	~FullTimeEmployee(){}
};

class PartTimeEmployee:public Employee{
	float daily_wage;
public:
	PartTimeEmployee(){}
	PartTimeEmployee(int eID, string name, float daily_wage):Employee(eID, name){
		this->daily_wage = daily_wage;
	}
	PartTimeEmployee(PartTimeEmployee &partTimeEmployee){
		this->setName(partTimeEmployee.getName());
		this->setEID(partTimeEmployee.getEID());
		this->daily_wage = partTimeEmployee.daily_wage;
	}
	void setDailyWage(float daily_wage){this->daily_wage = daily_wage;}
	float getDailyWage(){return this->daily_wage;}
	~PartTimeEmployee(){}
};

int main(int argc, char const *argv[])
{
	FullTimeEmployee p1(2, "Prem", 12000);
	FullTimeEmployee p2(p1);
	PartTimeEmployee p3(1, "Suresh", 500);
	PartTimeEmployee p4 = p3;

	cout << "Salary of " << p1.getName() << " is " << p1.getSalary() << endl;
	cout << "Salary of " << p2.getName() << " is " << p2.getSalary() << endl;
	cout << "Daily wage of " << p3.getName() << " is " << p3.getDailyWage() << endl;
	cout << "Daily wage of " << p4.getName() << " is " << p4.getDailyWage() << endl;
	return 0;
}
