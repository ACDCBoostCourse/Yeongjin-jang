#include <iostream>
#include <string>
using namespace std;

int main() {
	string num;
	int sum = 0;
	int cnt = 0;
	cin >> num;


	while(num.length() != 1) {
		for (int i = 0; i < num.length(); i++) {
			sum += num[i];
		}
		num = sum;
		cnt++;
	}//num의 길이가 1이 아닐 동안 반복되어야 하는데 한 번만 도는 이유를 모르겠다.
	//합의 값이 이상한 것을 보아 sum+=num[i] 구문에서 문제가 발생하는 것 같다.
	if (sum == 3 || sum == 6 || sum == 9) {
		cout << cnt << endl;
		cout << "YES" << endl;
	}
	else {
		cout << cnt << endl;
		cout << "NO" << endl;
	}
	
}