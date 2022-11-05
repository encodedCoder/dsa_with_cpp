/*
Given N, help Manmohan to print pattern upto N lines. For eg For N=6 , following pattern will be printed.
1
11
111
1001
11111
100001
*/

#include<iostream>
using namespace std;

void printEvenLine(int i)
{
	cout << 1;
	for (int j = 2; j <= i-1; j++)
	{
		cout << 0;
	} 
	cout << 1 << endl;
}

void printOddLine(int i)
{
	for (int j = 1; j <= i; ++j)
	{
		cout << 1;
	}
	cout<<endl;
}

int main() {
	int lines;
	cin >> lines;
	for (int i = 1; i <= lines; i++)
	{
		if (i%2 == 0)
		{
			printEvenLine(i);
		}
		else
		{
			printOddLine(i);
		}
	}
	return 0;
}