#include <iostream>
using namespace std;

class BaseCar{
public:
	virtual void start(){
		cout << "BaseCar started" << endl;
	}
};

class AdvCar:public BaseCar{
public:
	void start(){
		cout << "AdvCar started" << endl;
	}
};

int main(int argc, char const *argv[])
{
	AdvCar adv_car;
	BaseCar *p = &adv_car;
	p->start();
	return 0;
}
