#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	for (int i = 0;  i <= 300; i += 20)
	{
		cout << i <<"    " << 5*(i-32)/9 << endl;
	}
	return 0;
}
