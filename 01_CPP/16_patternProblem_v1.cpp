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

	int line;
	for (line = 1; line <= lines; ++line){
		if (line % 2 == 1)
			for (int count = 0; count < lines; ++count)
			{
				cout << 0;
				count++;
				if (count < line)
					cout << 1;
				else
					break; 
			}	
		else
			for (int count = 0; count < line; ++count)
			{
				cout << 1;
				count++;
				if (count < line)
					cout << 0;
				else
					break;
			}
		cout << endl;
	}
	return 0;
}
