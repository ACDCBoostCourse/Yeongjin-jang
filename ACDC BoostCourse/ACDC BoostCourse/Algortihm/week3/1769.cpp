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
	}//num�� ���̰� 1�� �ƴ� ���� �ݺ��Ǿ�� �ϴµ� �� ���� ���� ������ �𸣰ڴ�.
	//���� ���� �̻��� ���� ���� sum+=num[i] �������� ������ �߻��ϴ� �� ����.
	if (sum == 3 || sum == 6 || sum == 9) {
		cout << cnt << endl;
		cout << "YES" << endl;
	}
	else {
		cout << cnt << endl;
		cout << "NO" << endl;
	}
	
}