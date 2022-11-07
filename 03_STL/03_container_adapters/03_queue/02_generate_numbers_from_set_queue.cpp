#include <iostream>
#include <queue>
using namespace std;

class solution{
public:
	void print_all_numbers(vector<string> digits, long long n){
		queue<string> q;
		for(const auto& digit : digits){q.push(digit); cout << digit << " ";}

		n -= digits.size();
		while(n){
			string curr = q.front();
			for(const auto &digit : digits){
				if(n){
					cout << (curr + digit) << " ";
					q.push(curr + digit);
					n--;
				}else{
					break;
				}
			}
			q.pop();
		}
		cout << endl;
	}
};

int main(int argc, char const *argv[])
{
	solution obj;
	obj.print_all_numbers({"5","6","8"},10);
	return 0;
}
