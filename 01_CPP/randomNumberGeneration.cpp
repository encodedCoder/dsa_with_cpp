#include <iostream> 
#include <time.h>
using namespace std;

int main(){
	srand(1000);
	int curr_rand = (rand() % (9 - 4 + 1)) + 4;
	cout << curr_rand << " ";
	while(curr_rand != 4){
		curr_rand = (rand() % (9 - 4 + 1)) + 4;
		cout << curr_rand << " ";
	} cout << endl;
	
	return 0;
}


