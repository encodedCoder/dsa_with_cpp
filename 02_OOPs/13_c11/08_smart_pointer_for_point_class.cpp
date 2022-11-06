#include <iostream>
using namespace std;

class Point{
	int x, y;
public:
	Point(int a = 0, int b = 0){x = a, y = b;}
	bool isCenter(){return x==0 and y==0;}
	~Point(){}
};

class PointSmartPointer{
	Point *ptr;
public:
	PointSmartPointer(Point *p = NULL){ptr = p;}
	~PointSmartPointer(){delete ptr;}
	Point& operator*(){return *ptr;}
	Point* operator->(){return ptr;}
};

int main(int argc, char const *argv[])
{
	{
		PointSmartPointer pointPtr(new Point());
		cout << pointPtr->isCenter() << endl;
	}
	cout << "Bye" << endl;
	return 0;
}
