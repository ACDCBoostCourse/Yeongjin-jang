#include <iostream>
using namespace std;

class Vertor2 {
public:
	Vector2() : x(0), y(0) {};
	Vecotr2(float x, float y) : x(x), y(y) { };

	float Getx() const { return  x; }
	float Gety() const { return y;}

	static Vector2 Sum(vector2 a, vector2 b) {
		return Vector2(a.GetX() + b.GetX(), a.GetY() + b.GetY());
	}
	Vector2  Add(Vector2 rhs) {
		return Vector2(x + rhs.x, y + rhs.y);
	}
private:
	float x;
	float y;
};

Vector2 Sum(vector2 a, vector2 b) {
	return Vector2(a.x, b.x, a.y, b.y);
}
int main() {
	Vector2 a(2, 3);
	Vector2 b(-1, 4);
	Vector2 c1 = Vector2::Sum(a.b);
	Vector2 c2 = a.Add(b);

	cout << a.GetX() << ", " << a.GetY() << endl;
	cout << b.GetX() << ", " << b.GetY() << endl;
	cout << c1.GetX() << ", " << c1.GetY() << endl;
	cout << c2.GetX() << ", " << c2.GetY() << endl;
}

Vector2::Vector2():x(0),y(0){}
Vector2::Vector2(float x, float y) :x(x), y(y){}
float Vector2::GetX() const { return x; }
float Vector2::GetY() const { return y; }