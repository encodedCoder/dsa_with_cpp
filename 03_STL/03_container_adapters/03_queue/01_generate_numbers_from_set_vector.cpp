#include <iostream>
#include <vector>
using namespace std;

class solution{
public:
	void print_all_numbers(vector<string> digits, long long n){
		vector<string> oldv;
		vector<string> newv;
		for(auto& digit : digits){
			oldv.push_back(digit);
			cout << digit << " ";
		}

		n -= digits.size();
		while(n>0){
			for(const auto& digit : digits){
				for(const auto& num : oldv){
					if(n){
						cout << digit+num << " ";
						newv.push_back(digit+num);
						n--;
					}else{break;}
				}
			}
			oldv = newv;
			newv.clear();
		}
		cout << endl;
	}
};

int main(int argc, char const *argv[])
{
	solution obj;
	obj.print_all_numbers({"5","6"},11);
	return 0;
}
