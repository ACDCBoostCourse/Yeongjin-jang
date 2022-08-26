#include <iostream>
#include <string>
using namespace std;

struct cursor {
	string data;
	cursor* nextCursor;
	cursor* prevCursor;
};


int main() {
	string text;
	int numofcommend;
	string commend;
	string word;
	int Cursor = 0;

	cursor* head;
	cursor* tail;
	head = NULL;
	tail = NULL;

	cin >> text;
	Cursor += text.length();
	int length = text.length();
	cin >> numofcommend;
	for (int i = 0; i < numofcommend; i++) {
		cin >> commend;
		if (commend == "L") {
			if (Cursor !=1) {
				Cursor -= 1;
			}
		}
		if (commend == "D") {
			if (Cursor != length) {
				Cursor += 1;
			}
		}
		if (commend == "B") {
			if (Cursor != 0) {
				text.erase(Cursor-1,1);
				Cursor--;
			}
		}
		if (commend == "P") {
			cin >> word;
			text.insert(Cursor, word);
			Cursor++;
		}
	}
	
	cout<<text<<endl;
}
