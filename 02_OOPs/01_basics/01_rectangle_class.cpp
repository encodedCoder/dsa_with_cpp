#include <iostream>
using namespace std;

class Rectangle{
	float length;
	float breadth;
public:
	Rectangle(float length = 0, float breadth = 0){
		this->length = length;
		this->breadth = breadth;
	}
	Rectangle(Rectangle &rectangle){
		this->length = rectangle.getLength();
		this->breadth = rectangle.getBreadth();
	}
	void setLength(float lenghth){this->length = length;}
	void setBreadth(float breadth){this->breadth = breadth;}
	float getLength(){return length;}
	float getBreadth(){return breadth;}
	float area(){return this->length * this->breadth;}
	float perimeter(){return 2*(this->length + this->breadth);}
	~Rectangle(){}
};

int main(int argc, char const *argv[])
{
	Rectangle rectangle(15, 20);
	cout << rectangle.getLength() << endl;
	cout << rectangle.area() << endl;
	cout << rectangle.perimeter() << endl;
	return 0;
}
