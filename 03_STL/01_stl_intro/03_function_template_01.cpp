#include <iostream>
using namespace std;

template <typename T>
T max_ele(const T &x, const T &y){return x>y?x:y;}

int main(int argc, char const *argv[])
{
	cout << max_ele<int>(4,6) << endl;
	cout << max_ele<double>(5.20, 3.67) << endl;
	cout << max_ele<string>(string("abcd"), string("abcde")) << endl;
	return 0;
}
