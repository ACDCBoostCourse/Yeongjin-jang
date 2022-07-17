#include <iostream>
#include <string>
using namespace std;

int main() {
	int num;

	int score = 1;
	char result[80];
	int total[10000] = { 0, };
	int(*total_score)[10000];
	total_score = &total;
	cin >> num;



	for (int j = 0; j < num; j++) {
		cin >> result;
		for (int i = 0; i < 80; i++) {
			if (result[i] == 'O') {
				total[j] += score;
				score++;
			}
			else {
				score = 1;
			}
		}
		score = 1;
	}
	for (int j = 0; j < num; j++) {
		cout <<(*total_score)[j] << endl;
	}
}