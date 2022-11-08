#include <iostream>
using namespace std;

class Point{
private:
	int x;
	int y;
public:
	Point(){
		x = 0;
		y = 0;
	}
	Point(int a, int b){
		x = a;
		y = b;
	}
	void print(){
		cout << x << ", " << y << endl;
	}
};

int main(int argc, char const *argv[])
{
	Point *point1 = new Point(5,8);
	point1->print();
	return 0;
}