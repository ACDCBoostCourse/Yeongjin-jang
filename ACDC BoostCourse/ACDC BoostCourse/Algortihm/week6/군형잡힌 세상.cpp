#include <iostream>
using namespace std;

template <typename T>

class queue {
private:
	T* arr;
	int s_size;
	int topCursor;
public:
	stack() {
		s_size = 0;
		arr = new T[10000];
		topCursor = 0;
	}
	
	void push(T elem) {
		arr[topCursor] = elem;
		topCursor++;
	}
	void pop(T elem) {
		if (s_size != 0) {
			arr[topCursor - 1] = 0;
			topCursor--;
		}
		else {
			cout << "-1" << endl;
		}
	}
	T top() {
		return arr[topCursor - 1];
	}
	void front() {
		if (s_size != 0) {
			cout << arr[0] << endl;
		}
		else
			cout << "-1" << endl;
	}
	void back() {
		if (s_size != 0) {
			cout << arr[topCursor - 1] << endl;
		}
		else {
			cout << "-1" << endl;
		}
	}

	bool empty() {
		if (s_size == 0) {
			return true;
		}
		else {
			return false;
		}
		
		int size() {
			return s_size;
		}
	}
};

	int main() {
		int n;
		string commend;
		for (int i = 0; i < n; i++) {
			cin >> commend;
		}

	}