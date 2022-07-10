#include <iostream>
using namespace std;

int main() {
	int A, B, C;
	cin >> A >> B >> C;
	int result;
	result = A * B * C;
	int num[10];
	int numcount[10];
	int cnt = 0;
	int  big = 0;
	for (int i = 0; result>=1; i++) {
		num[i]=result% 10;
			result /= 10;
	}
	/*for (int i = 0; i < 10; i++) {
		cout << num[i]<<endl;
	}*/
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (num[j] == i) cnt++;
			
		}
		cout << cnt << endl;
		cnt = 0;
	}
	
}