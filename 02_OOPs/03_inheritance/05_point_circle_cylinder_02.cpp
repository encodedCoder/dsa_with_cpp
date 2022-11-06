#include <iostream>
#include <math.h>
using namespace std;

class Point{
	float x, y;
public:
	Point(float a=0, float b=0){setX(a), setY(b);}
	Point(Point &p){x = p.x, y = p.y;}
	void setX(float a){x = a;}
	void setY(float b){y = b;}
	float getX(){return x;}
	float getY(){return y;}
	bool isOrigin(){return x==0.0f and y==0.0f;}
	float distanceFromOrigin(){return sqrt(x*x + y*y);}
	~Point(){}
};

class Circle:public Point{
	float radius;
protected:
	float const pi = 3.14f;
public:
	Circle(float x, float y, float r):Point(x,y){setRadius(r);}
	// Cirlce(Circle &crl){setX(crl.getX()); setY(crl.getY()); setRadius(crl.radius);}
	void setRadius(float r){radius = r;}
	float getRadius(){return radius;}
	float area(){return pi*radius*radius;}
	float circumference(){return 2*pi*radius;}
	~Circle(){}
};

class Cylinder:public Circle{
	float height;
public:
	Cylinder(float x, float y, float r, float h):Circle(x,y,r){setHeight(h);}
	// Cylinder(Cylinder &cld){setX(cld.getX()), setY(cld.getY()), setRadius(cld.getRadius()), height = cld.height;}
	void setHeight(float h){height = h;}
	float getHeight(){return height;}
	float area(){return (2*pi*getRadius())*(getRadius() + height);}
	float volume(){return pi*getRadius()*getRadius()*height;}
	~Cylinder(){}
};


int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}
