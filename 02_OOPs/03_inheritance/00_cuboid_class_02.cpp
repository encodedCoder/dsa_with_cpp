#include <iostream>
using namespace std;

class Rectangle{
	float length;
	float breadth;
public:
	Rectangle(float l=0, float b=0){setLength(l); setBreadth(b);}
	Rectangle(Rectangle &r){setLength(r.length); setBreadth(r.breadth);}
	void setLength(float l){length = l;}
	void setBreadth(float b){breadth = b;}
	float getLength(){return length;}
	float getBreadth(){return breadth;}
	float area(){return length*breadth;}
	float perimeter(){return 2*(length+breadth);}
	bool isSquare(){return length == breadth;}
	~Rectangle(){}
};
class Cuboid:public Rectangle{
	float height;
public:
	Cuboid(float l=0, float b=0, float h=0):Rectangle(l,b){setHeight(h);}
	Cuboid(Cuboid &c){setLength(c.getLength()), setBreadth(c.getBreadth()), height = c.height;}
	void setHeight(float h){height = h;}
	float getHeight(){return height;}
	float volume(){return getLength()*getBreadth()*height;}
	float area(){return 2*(getLength()*getBreadth() + getBreadth()*height + height*getLength());}
	bool isCube(){return (getLength() == height) and (getBreadth() == height);}
	~Cuboid(){}
};

int main(int argc, char const *argv[])
{
	Cuboid c(4,4,4);
	cout << c.isCube() << endl;
	cout << c.area() << endl;
	cout << c.volume() << endl;
	return 0;
}
