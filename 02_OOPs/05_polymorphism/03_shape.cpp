#include <iostream>
using namespace std;

class Shape{
public:
	virtual float area()=0;
	virtual float perimeter()=0;
};

class Rectangle:public Shape{
	float length, breadth;
public:
	Rectangle(float l, float b){length = l, breadth = b;}
	float area(){return length*breadth;}
	float perimeter(){return 2*(length+breadth);}
};

class Circle:public Shape{
	float radius;
	const float pi = 3.14;
public:
	Circle(float r){radius = r;}
	float area(){return pi*radius*radius;}
	float perimeter(){return 2*pi*radius;}
};

int main(int argc, char const *argv[])
{
	Shape* shape = new Rectangle(4,5);
	cout << shape->area() << endl;
	cout << shape->perimeter() << endl;
	shape = new Circle(10);
	cout << shape->area() << endl;
	cout << shape->perimeter() << endl;
	return 0;
}
