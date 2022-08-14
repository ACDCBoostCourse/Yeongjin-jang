#include <iostream>
#include <string>
using namespace std;

template <class T>
class Queue {
private:
	T* Data;
	int front, back, capacity;
public:
	Queue(int size = 10) {
		if (size < 0) {
			cout << "size error";
		}
		Data = new T[size];
		front = back = 0;
		capacity = size;
	}
	~Queue() { delete[]Data; }
	void Push(const T& data) {
		Data[back++] = data;
	}
	void Pop() {
		if (Empty()) {
			cout << "Queue is empty";
		}
		front++;
	}
	bool Empty() { return front == back; }
	T& Front() {
		if (Empty()) {
			cout << "Queue is empty";
		}
		return Data[front];
	}
	T& Back() {
		if (Empty()) {
			cout << "Queue is empty";
			return Data[back - 1];
		}
	}
	int Size() {
		return back - front;
	}
};

int main() {
	int N, input;
	string cmd;
	cin >> N;
	Queue<int>Q(N + 1);
	for (int i = 0; i < N; i++) {
		cin >> cmd;
		if (cmd == "push") {
			cin >> input;
			Q.Push(input);
		}
		else if (cmd == "front") {
			if (Q.Empty()) cout << -1 << endl;
			else
				cout << Q.Front() << endl;
		}
		else if (cmd == "back") {
			if (Q.Empty()) cout << -1 << endl;
			else
				cout << Q.Back() << endl;
		}
		else if (cmd == "pop") {
			if (Q.Empty()) cout << -1 << endl;
			else {
				cout << Q.Front() << endl;
				Q.Pop();
			}
		}
		else if (cmd == "empty") {
			cout << Q.Empty() << endl;
		}
		else if (cmd == "size") {
			cout << Q.Size() << endl;
		}
	}
}