#include <iostream>
using namespace std;

int main() {
	int N;
	int cnt = 0;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		if (i< 100) { cnt++; }
		else if (N >= 100) {
			if (i % 10 - (i / 10) % 10 == (i / 10) % 10 - (i / 100) % 100)
				cnt++;
		}
	}
	cout << cnt;
}