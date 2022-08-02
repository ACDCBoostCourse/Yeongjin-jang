#include <iostream>
using namespace std;

void sort(int *arr, bool isAscending) {
	int temp ;
	
	if (isAscending==1) {
		for (int i = 0; i < 3; i++) {
			for (int j = i + 1; j < 4; j++) {
				if (arr[j] < arr[i]) {
					temp = arr[j];
					arr[j] = arr[i];
					arr[i] = temp;
				}
			}
		}
	}
	else if (isAscending==0) {
		for (int i = 0; i < 3; i++) {
			for (int j = i + 1; j < 4; j++) {
				if (arr[j] > arr[i]) {
					temp = arr[j];
					arr[j] = arr[i];
					arr[i] = temp;
				}
			}
		}
	}
		
	
}

// ���� �Լ��� �Ʒ� �ڵ带 �����ؼ� �ٿ��ְ� ���� �۵��ϴ��� �����ϼ���!

int main() {
	int items[4] = { 1,5,3,2 };
	sort(items, true);

	for (int item : items) {
		cout << item << ' ';  // 1 2 3 5
	}

	cout << endl;
	sort(items, false);

	for (int item : items) {
		cout << item << ' ';  // 5 3 2 1
	}
}