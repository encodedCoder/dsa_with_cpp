#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	int cliffEnd = 10;
	int step = 10;

	while (step < cliffEnd)
	{
		step++;
		cout << "Took 1 step, now at: " << step << endl;
	}

	if (step == cliffEnd)
		cout << "Standing at the cliff." << endl;
	else if (step > cliffEnd)
		cout << "Falling from cliff." << endl;


	return 0;
}
