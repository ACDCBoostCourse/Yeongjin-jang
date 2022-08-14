#include <iostream>
using namespace std;

class Vertor2 {
public:
	Vector2() : x(0), y(0) {};
	Vecotr2(float x, float y) : x(x), y(y) { };

	float Getx() const { return  x; }
	float Gety() const { return y; }

	
	Vector2  operator+(const Vector2 rhs) const; 
	Vector2  operator-(const Vector2 rhs) const;
	Vector2  operator*(const float rhs) const;
	Vector2  operator/(const float rhs) const;
	Vector2 operator*(const Vector2 rhs) const;

private:
	float x;
	float y;
};

Vector2 Sum(vector2 a, vector2 b) {
	return Vector2(a.GetX(), b.GetX(), a.GetY(), b.GetY());
}
int main() {
	Vector2 a(2, 3);
	Vector2 b(-1, 4);
	Vector2 c1 = a-b;
	Vector2 c2 = a*1.6;
	Vector2 c3 = a /2;
	float c4 = a * b;

	cout << a.GetX() << ", " << a.GetY() << endl;
	cout << b.GetX() << ", " << b.GetY() << endl;
	cout << c1.GetX() << ", " << c1.GetY() << endl;
	cout << c2.GetX() << ", " << c2.GetY() << endl;
}

Vector2::Vector2() :x(0), y(0) {}
Vector2::Vector2(float x, float y) :x(x), y(y) {}
float Vector2::GetX() const { return x; }
float Vector2::GetY() const { return y; }

Vector2 Vector2::operator+(const Vector2 rhs) const {
	return Vector2(a + rhs.x, y + rhs.y);
}
Vector2 Vector2::operator-(const Vector2 rhs) const {
	return Vector2(a + rhs.x, y + rhs.y);
}
Vector2 Vector2::operator*(const float rhs) const {
	return Vector2(a + rhs.x, y + rhs.y);
}
Vector2 Vector2::operator+(const float rhs) const {
	return Vector2(a + rhs.x, y + rhs.y);
}
}
float Vector2 Vector2::operator*(const Vector2 rhs) const {
	return x * rhs.x + y * rhs.y;
}
