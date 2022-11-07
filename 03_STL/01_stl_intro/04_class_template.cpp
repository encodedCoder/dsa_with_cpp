#include <iostream>
using namespace std;

template <typename S, typename T>
class Pair{
	S x; T y;
public:
	Pair(S i, T j):x(i), y(j){}
	S get_first(){return x;}
	T get_second(){return y;}
};

int main(int argc, char const *argv[])
{
	Pair<int,string> pair(1, "Suresh");

	cout << pair.get_first() << ": " << pair.get_second() << endl;

	return 0;
}
