#include <iostream>
#include <string>
using namespace std;

int main() {
	int score_geminis[10];
	int score_kulibus[10];

	int sum_geminis=0;
	int sum_kulibus=0;

	int cnt = 0;

	for (int i = 0; i < 9; i++) {
		cin >> score_geminis[i];
	}
	
	for (int i = 0; i < 9; i++) {
		cin >> score_kulibus[i];
	}

	for (int i = 0; i < 9; i++) {
		sum_geminis = sum_geminis+score_geminis[i];
		sum_kulibus = sum_kulibus + score_kulibus[i];

		if (sum_geminis > sum_kulibus) {
			cnt++;
		}
	}
	if (cnt > 0 && (sum_geminis < sum_kulibus)) {
		cout << "Yes";
	}
	else cout << "No";


}