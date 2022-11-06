#include <iostream>
using namespace std;

class Rectangle{
	float length;
	float breadth;
public:
	Rectangle(float l=1, float b=1){
		length = l;
		breadth = b;
	}
	Rectangle(Rectangle &r){
		r.length = length;
		r.breadth = breadth;
	}
	void setLength(float l){length = l;}
	void setBreadth(float b){breadth = b;}
	float getLength(){return length;}
	float getBreadth(){return breadth;}
	float area(){return length*breadth;}
	float perimeter(){return 2*(length+breadth);}
	~Rectangle(){}
};

class Cuboid:public Rectangle{
	float height;
public:
	Cuboid(float l=1, float b=1, float h=1):Rectangle(l, b){
		height = h;
	}
	void setHeight(float h){height = h;}
	float getHeight(){return height;}
	float area(){
		if(isCube()) return (6*getLength()*getBreadth());
		else return (2*(getLength()*getBreadth() + getBreadth()*height + height*getLength()));
	}
	float volume(){return getLength()*getBreadth()*height;}
	bool isCube(){return getLength() == getBreadth() and getLength() == height;}
	~Cuboid(){}
};

int main(int argc, char const *argv[])
{
	Cuboid c1(4,4,4);
	cout << c1.isCube() << endl;
	cout << c1.area() << endl;
	cout << c1.Rectangle::area() << endl;
	cout << c1.volume() << endl;
	return 0;
}
