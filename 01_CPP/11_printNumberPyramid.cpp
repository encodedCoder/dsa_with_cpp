/*
Print the following pattern:-
		    1
		   232
		  34543
		 4567654
		567898765
*/

#include<iostream>
using namespace std;

int main()
{
	int lines = 5;
	// cin >> lines;

	int line;
	for (line = 1; line <= lines; line++)
	{
		// print the blank space
			for (int space = lines-line; space >= 1; space--)
				cout << " ";
		// print the first half of line
			int num = line;
			for (int time = 1;time <= line; num++, time++)
				cout << num;
		// print the second half of line
			for (int restNum = num-2, time = 1; time <= line-1; restNum--, time++)
				cout << restNum;
		cout << endl;
	}
	return 0;
}
