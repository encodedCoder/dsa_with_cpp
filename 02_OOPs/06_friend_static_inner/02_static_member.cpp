#include <iostream>
using namespace std;

class Test{
	int a, b;
	static int count;
public:
	Test(){a = 10, b = 30;}
};
int Test::count = 50;

int main(int argc, char const *argv[])
{
	Test t1;
	// cout << t1.count << endl;
	// cout << Test::count << endl;
	return 0;
}
