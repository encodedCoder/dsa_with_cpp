/*
Print the following pattern
0
10
010
1010
01010
101010
*/
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int lines = 6;
	// cin >> lines;

	int line, val;
	for (line = 1; line <= lines; ++line){
		int val = line % 2 ? 0 : 1;
		for (int count = 0; count < line; ++count)
		{
			cout << val;
			val = 1 - val; 
		}	
		cout << endl;
	}
	return 0;
}
