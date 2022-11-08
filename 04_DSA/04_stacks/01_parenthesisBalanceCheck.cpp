#include <iostream>
#include <stack>
using namespace std;

bool isBalancedParenthesis(char *str){
	stack<char> stackk;
	while (*str != '\0'){
		if (*str == '{' or *str == '(' or *str == '['){
			stackk.push(*str);
		}else if (*str == ')' and stackk.top() == '('){
			stackk.pop();
		}else if (*str == '}' and stackk.top() == '{'){
			stackk.pop();
		}else if (*str == ']' and stackk.top() == '['){
			stackk.pop();
		}else{
			return false;
		}
		str++;
	}
	return (stackk.empty() == true);
}

int main(int argc, char const *argv[])
{
	char parenthesis[] = "{{[]}}(()){";
	if (isBalancedParenthesis(parenthesis)){
		cout << "Balanced." << endl;
	}
	else{
		cout << "Not Balanced." << endl;
	}
	return 0;
}