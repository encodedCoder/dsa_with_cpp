#include <iostream>
using namespace std;

class InnovaCar{
	static int price;
public:
	static int getPrice(){return price;}
};
int InnovaCar::price;

int main(int argc, char const *argv[])
{
	cout << InnovaCar::getPrice() << endl;
	return 0;
}
