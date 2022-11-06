#include <iostream>
using namespace std;

class Car{
public:
	virtual void start() = 0;
	virtual void stop() = 0;
};

class Innova:public Car{
public:
	void start(){cout << "Innova started" << endl;}
	void stop(){cout << "Innova stopped" << endl;}
};

class Swift:public Car{
public:
	void start(){cout << "Swift started" << endl;}
	void stop(){cout << "Swift stopped" << endl;}
};

int main(int argc, char const *argv[])
{
	Innova innova;
	Car *car = &innova;
	car->start();
	// delete car;
	car = new Swift();
	car->start();
	return 0;
}
