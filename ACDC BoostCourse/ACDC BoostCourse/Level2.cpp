#include <iostream>
using namespace std;

int main() {
	int numexam;
	cin >> numexam;
	double score[1000];
	int max = 0;
	double sum = 0;
	for (int i = 0; i < numexam; i++) {
		cin >> score[i];
	}
	for (int i = 0; i < numexam; i++) {
		if (score[i] > max) {
			max = score[i];
		}
	}
	for (int i = 0; i < numexam; i++) {
		score[i] = score[i] / max * 100;
		sum += score[i];
	}
	cout.precision(4);
	cout << (double)sum / numexam;
}