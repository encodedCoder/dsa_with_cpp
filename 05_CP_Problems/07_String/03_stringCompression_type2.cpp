// { Driver Code Starts
	#include <bits/stdc++.h>
	using namespace std;

	char *encode(char *src);    
	vector<int> extractDigitsInReverse(int *count);

	int main() {
		
		// char str[10000] = {'a','a','a','a','b','b','b','c','c','c', '\0'}; 
		char str[10000] = {'a','b','b','b','c','d','d','d','d', '\0'};

			
		cout<< encode(str)<<endl; 

		return 0;
	}
// } Driver Code Ends


/*You are required to complete this function */
	vector<int> extractDigitsInReverse(int *count) {
		vector<int> digits;
		while (*count) {
			digits.push_back(*count % 10);
			*count /= 10;
		}
		return digits;
	}

	char *encode(char *str){     
		char *encodedStr = new char[10000];

		int count;
		char prev;
		bool counting = false;

		int j = 0;
		char *t = str;
		while (*t != '\0') {
			if(not counting){
				prev = *t;
				count = 1;
				counting = true;
				t++;
			} else if (*t == prev) {
				count++;
				++t;
			} else {
				counting = false;
				encodedStr[j++] = prev;
				if (count < 10) {
					encodedStr[j++] = count+48;
				} else {
					vector<int> digitsOfCount = extractDigitsInReverse(&count);
					for (int i = digitsOfCount.size()-1; i >= 0; --i) {
						encodedStr[j++] = digitsOfCount[i]+48;
					}
				}
			} 
		}
		encodedStr[j++] = prev;
		encodedStr[j++] = count+48;
		encodedStr[j] = '\0';

		return encodedStr;
	}	