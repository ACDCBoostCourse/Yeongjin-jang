#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	
	while (1) {
		string text;
		getline(cin, text);
		if (text == ".") break;
		stack<char>Text;
		for (int i = 0; i < text.length(); i++) {
			
			
			if (text[i] == '[') {
				if (text[i] == ']') {
					Text.pop();
				}
				else if (text[i] == ')') {
					Text.push(1);
				}
			}
			if (text == "(") {
				if (text == ")") {
					Text.pop();
				}
				else if (text == "]") {
					Text.push(2);
				}
			}
		}
		if (Text.empty()) {
			cout << "yes";
		}
		else {
			cout << "no";
		}

		if (text == "\n") {
			break;
		}
	}
	
	

	

}