#include <iostream>
using namespace std;

class Demo{
	int x = 20, y = 50;
public:
	void display() const {
		// x++;
		cout << x << " " << y << endl;
	}
};

int main(int argc, char const *argv[])
{
	Demo d;
	d.display();
	return 0;
}
