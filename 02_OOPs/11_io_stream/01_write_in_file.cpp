#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
	ofstream outfile("my_text.txt", ios::trunc);

	outfile << "Suresh" << endl;
	outfile << "21-814" << endl;
	outfile << "IT" << endl << endl;

	outfile.close();

	return 0;
}
