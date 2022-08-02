#include <iostream>
using namespace std;

int* sorted(int* arr, bool isAscending) {
	int* temp = new int[4];
	for (int i = 0; i < 4; i++) {
		temp[i] = arr[i];
	}
	int tmp;
	if (isAscending == 1) {
		for (int i = 0; i < 3; i++) {
			for (int j = i + 1; j < 4; j++) {
				if (arr[i] > arr[j]) {
					tmp = temp[j];
					temp[j] = temp[i];
					temp[i] = tmp;
				}
			}
		}
	}
	else if (isAscending == 0) {
		for (int i = 0; i < 3; i++) {
			for (int j = i + 1; j < 4; j++) {
				if (arr[i] < arr[j]) {
					tmp = temp[j];
					temp[j] = temp[i];
					temp[i] = tmp;
				}
			}
		}
	}
	return temp;
}





// ���� �Լ��� �Ʒ� �ڵ带 �����ؼ� �ٿ��ְ� ���� �۵��ϴ��� �����ϼ���!

int main() {
	int items[4] = { 1,5,3,2 };
	int* newItems;
	newItems = sorted(items, true);

	for (int item : items) {
		cout << item << ' ';  // 1 5 3 2
	}

	cout << endl;

	for (int i = 0; i < 4; i++) {
		cout << newItems[i] << ' ';  // 1 2 3 5
	}
}