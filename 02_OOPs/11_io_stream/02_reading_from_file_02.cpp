#include <iostream>
#include <fstream>
// using namespace std;

int main(int argc, char const *argv[])
{
	std::ifstream infile("my_text.txt");

	if(not infile.is_open()) {
		std::cout << "File cannot be opened";
	}else{
		std::string line;

		while(infile){
			getline(infile, line);
			std::cout << line << " ";
		}
	}
	return 0;
}
