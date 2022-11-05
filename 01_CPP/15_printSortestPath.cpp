#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	int x = 0, y = 0;
	// char ch[] = {'n','n','n','s','s','e','e','w','e'};
	char ch[] = "NNNSSEEWE";

	char *t = ch;
	while (*t != '\0'){
		if (*t == 'N')
			y++;
		else if (*t == 'S')
			y--;
		else if (*t == 'E')
			x++;
		else
			x--;
		t++;
	}

	cout << x << y;

	return 0;
}
