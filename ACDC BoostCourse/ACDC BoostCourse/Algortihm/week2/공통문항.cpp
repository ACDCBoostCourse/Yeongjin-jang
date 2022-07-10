#include <iostream>
using namespace std;

int main() {
	string word;
	int numcnt[26]={0};
	int max = 0;
	int cnt = 0;
	int result;
	cin >> word;
	for (int i = 0; i < word.length(); i++) {
		if (word[i] >= 65) numcnt[word[i] - 'a']++;
		else  if (word[i] >= 97) numcnt[word[i] - 'A']++;
		
	}
	for (int i = 0; i < word.length(); i++) {
		if (numcnt[i] > max) {
			max = numcnt[i];
			result = i;
		}
	}
	for(int i=0;i<word.length();i++){
		if (max == numcnt[i]) cnt++;
	}

	if (cnt > 1) cout << "?" << endl;
	else cout << (char)(result + 65) << endl;
	
}