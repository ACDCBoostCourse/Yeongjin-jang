#include <iostream>
using namespace std;

int* sorted(int* arr, bool isAscending) {
	int temp;
	int array[4];//���ο� �迭�� �����Ͽ� �̰��� �����ϸ� ������ �迭�� �����ǰ� ������ �迭�� ����� �� ���� ���̶�� ����
	if (isAscending == 1) {
		for (int i = 0; i < 3; i++) {
			for (int j = i + 1; j < 4; j++) {
				if (arr[i] > arr[j]) {
					temp = arr[j];
					arr[j] = arr[i];
					array[i] = temp;
				}
			}
		}
	}
	else if (isAscending == 0) {
		for (int i = 0; i < 3; i++) {
			for (int j = i + 1; j < 4; j++) {
				if (arr[i] < arr[j]) {
					temp = arr[j];
					arr[j] = arr[i];
					array[i] = temp;
				}
			}
		}
	}
}





// ���� �Լ��� �Ʒ� �ڵ带 �����ؼ� �ٿ��ְ� ���� �۵��ϴ��� �����ϼ���!

int main() {
	int items[4] = { 1,5,3,2 };
	int newItems[4];
	newItems = sorted(items, true);//�� �κп� ������ �� �߻��ϴ��� �𸣰ڴ�.

	for (int item : items) {
		cout << item << ' ';  // 1 5 3 2
	}

	cout << endl;

	for (int item : newItems) {
		cout << item << ' ';  // 1 2 3 5
	}
}