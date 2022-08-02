#include <iostream>
using namespace std;

int* sorted(int* arr, bool isAscending) {
	int temp;
	int array[4];//새로운 배열을 선언하여 이곳에 저장하면 기존의 배열은 유지되고 정리된 배열로 출력할 수 있을 것이라고 생각
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





// 메인 함수에 아래 코드를 복사해서 붙여넣고 정상 작동하는지 검증하세요!

int main() {
	int items[4] = { 1,5,3,2 };
	int newItems[4];
	newItems = sorted(items, true);//이 부분에 오류가 왜 발생하는지 모르겠다.

	for (int item : items) {
		cout << item << ' ';  // 1 5 3 2
	}

	cout << endl;

	for (int item : newItems) {
		cout << item << ' ';  // 1 2 3 5
	}
}