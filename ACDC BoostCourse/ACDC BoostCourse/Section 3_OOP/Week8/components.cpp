//������
#include <iostream>
#include "components.h"	
using namespace std;

bool Username::isBurning = false;
//string  Username::name;
int Username::luck;

//string Item::
int Item::SuccessPercentage;


//Username(Warrior, Magician, Archer)
Username::Username(){
	name == "";
	level = 0;
	luck = 0;
}
Warrior::Warrior(string Name, int Level, int money, int Luck) {
	name == Name;
	level = Level;
	luck = Luck;
}
Magician::Magician(string Name, int Level, int money, int Luck) {
	name == Name;
	level = Level;
	luck = Luck;
}
Archer::Archer(string Name, int Level, int money, int Luck) {
	name == Name;
	level = Level;
	luck = Luck;
}

void Username::defend() {
	cout << "(" << Username::name << ") : ���" << endl;
}
void Warrior::defend() {
	cout << "(" << Username::name << ") : ���" << endl;
}
void Magician::defend() {
	cout << "(" << Username::name << ") : ���" << endl;
}
void Archer::defend() {
	cout << "(" << Username::name << ") : ���" << endl;
}
Item Username::combinate(Item a, Item b) {
	return a + b;
}
void Warrior::attack() {
	cout << "(" << Username::name << ") : �� �ֵθ���" << endl;
}
void Magician::attack() {
	cout << "(" << Username::name << ") : ���� ����" << endl;
}
void Archer::attack() {
	cout << "(" << Username::name << ") : Ȱ ���" << endl;
}

//Item
Item::Item(string Name, int Performance) {
	name == Name;
	performance = Performance;
}
int  Item::GetPerformance() {
	return performance;
}
 Item & Item::operator+ (Item b) {
	if (rand() % 100 >= SuccessPercentage) {
		cout << "���� ����!" << endl;
		performance += b.performance;
		return *this;
	}
	else if (rand() % 100 < SuccessPercentage) {
		cout << "���� ����!" << endl;
		Performance = 0;
		Name = "���� ���� ������";
		return *this;
	}
}

//Manager
Manager::Manager(string Name) {
	name == Name;
}
void Manager::openBurningEvent() {
	Username::isBurning = true;
	Item::SuccessPercentage = 50 + Username::luck;
	if (Item::SuccessPercentage <= 90) {
		Item::SuccessPercentage += 10;
	}
	else if (Item::SuccessPercentage > 90) {
		Item::SuccessPercentage = 100;
	}
	cout << "���� �̺�Ʈ ����" << endl;
};
void Manager::closeBurningEvent() {
	Username::isBurning = false;
	Item::SuccessPercentage = 50 + Username::luck;
};