#include <iostream>
using namespace std;

class Outer{
public:
	int a;
	static int b;

	void fun(){
		i.show();
		cout << i.x << endl;
	}

	class Inner{
	public:
		int x = 25;
		void show(){
			cout << b << endl;
		}
	};
	Inner i;
};
int Outer::b = 45;

int main(int argc, char const *argv[])
{
	Outer o;
	o.fun();
	return 0;
}
