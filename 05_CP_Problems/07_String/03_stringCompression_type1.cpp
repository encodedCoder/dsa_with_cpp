#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int compress(vector<char>& chars) {
		int count;
		char prev;
		bool counting = false;

		int i = 0;
		int j = -1;
		while (i < chars.size()) {
			if(not counting){
				prev = chars[i];
				count = 1;
				counting = true;
				++i;
			} else if (chars[i] == prev) {
				count++;
				++i;
			} else {
				counting = false;
				if (count == 1) {
					chars[++j] = prev;
				}
				else if (count > 1 and count < 10){
					chars[++j] = prev;
					chars[++j] = count+48;
				} 
				else {
					chars[++j] = prev;
					vector<int> digitsOfCount = extractDigitsInReverse(&count);
					for (int i = digitsOfCount.size()-1; i >= 0; --i) {
						chars[++j] = digitsOfCount[i] + 48;
					}
				}
			}
		}

		if (count == 1) {
			chars[++j] = prev;
		} else if (count > 1 and count < 10){
			chars[++j] = prev;
			chars[++j] = count+48;
		} else {
			chars[++j] = prev;
			vector<int> digitsOfCount = extractDigitsInReverse(&count);
			for (int i = digitsOfCount.size()-1; i >= 0; --i) {
				chars[++j] = digitsOfCount[i] + 48;
			}
		}

		chars.erase(chars.begin()+(++j), chars.end());

		return chars.size();
	}

	vector<int> extractDigitsInReverse(int *count) {
		vector<int> digits;
		while (*count) {
			digits.push_back(*count % 10);
			*count /= 10;
		}
		return digits;
	}
};

int main(int argc, char const *argv[])
{
	// vector<char> chars{'a','a','b','b','c','c','c'};
	// vector<char> chars{'a','a','b','b','c','c','c','z'};
	// vector<char> chars{'a'};
	// vector<char> chars{'a','b','b','b','b','b','b','b','b','b','b','b','b'};
	// vector<char> chars{'a','b','b','b','b','b','b','b','b','b','b','b','b','z'};
	// vector<char> chars{'a','a','a','b','b','a','a'};
	vector<char> chars{'o','o','o','o','o','o','o','o','o','o'};

	Solution obj;
	cout << obj.compress(chars) << endl;

	for (const auto& c : chars) {
		cout << c << " ";
	} cout << endl;
	return 0;
}