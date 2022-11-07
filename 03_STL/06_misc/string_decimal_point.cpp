#include <iostream>
using namespace std;

class Solution{
public:
	string digits_after_decimal_point(const string& floating_number){
		int pos = floating_number.find(".");
		return floating_number.substr(pos+1);
	}
};

int main(int argc, char const *argv[])
{
	string str1 = "12.5318";

	Solution obj;
	cout << obj.digits_after_decimal_point(str1) << endl;
	return 0;
}
