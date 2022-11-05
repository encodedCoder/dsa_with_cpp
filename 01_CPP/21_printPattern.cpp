/*
Print the Follwing pattern:- 
ABCDE
ABCD
ABC
AB
A
*/

#include<iostream>
using namespace std;
int main() {
	int rows, row;
	rows = 5;
	char ch;
	while (rows){
		row = rows;
		ch = 'A';
		while (row){
			cout << ch++;
			row--;
		}
		cout << endl;
		rows--;
	}
	return 0;
}