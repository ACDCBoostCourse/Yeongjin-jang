

#include <stdio.h>

int main() {
	int arr[3] = { 1,2,3 };

	int(*ptr_arr)[3];
	ptr_arr = &arr;

	for (int i = 0; i < 3; i++) {
		printf("%d\n", (*ptr_arr)[i]);
	}
}