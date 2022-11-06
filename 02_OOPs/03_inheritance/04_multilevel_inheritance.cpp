#include <iostream>
#include <math.h>
using namespace std;

class Point{
	float x, y;
public:
	Point(float a=0, float b=0){
		x = a, y = b;
	}
	Point(Point &p){
		x = p.x;
		y = p.y;
	}
	void setX(float a){x = a;}
	void setY(float b){y = b;}
	void setXY(float a, float b){x = a; y = b;}
	void setYX(float b, float a){x = a; y = b;}
	float getX(){return x;}
	float getY(){return y;}
	bool isOrigin(){return x == y;}
	// float distanceFromOrigin(){
	// 	reuturn
	// }
};
class Circle:public Point{
	float radius;
public:
	const float pi = 3.14f;
	Circle(float a=0, float b=0, float r=1):Point(a,b){
		radius = r;
	}
	void setRadius(float r){radius = r;}
	float getRadius(){return radius;}
	float area(){return pi*radius*radius;}
	float circumference(){return 2*pi*radius;}
};
class Cylinder:public Circle{
	float height;
public:
	Cylinder(float a=0, float b=0, float r=1, float h=1):Circle(a,b,r){
		height = h;
	}
	void setHeight(float h){height = h;}
	float getHeight(){return height;}
	float volume(){return pi*getRadius()*getRadius()*height;}
	float area(){return 2*pi*getRadius()*(getRadius()+height);}
};

int main(int argc, char const *argv[])
{
	Cylinder cylinder(1,2,5,10);
	cout << cylinder.volume() << endl;
	cout << cylinder.area() << endl;
	return 0;
}
