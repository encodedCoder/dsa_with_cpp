#include <iostream>
#define PI 3.1425

#ifndef PI
	#define PI 3.142
#endif

#define C cout

#define SQR(x) (x*x)

#define MSG(x) #x

using namespace std;
int main(int argc, char const *argv[])
{
	C << PI << endl;
	C << SQR(5) << endl;
	C << MSG(hello! welcome) << endl;
	return 0;
}
