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

// 메인 함수에 아래 코드를 복사해서 붙여넣고 정상 작동하는지 검증하세요!

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