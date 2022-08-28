//������
#include <iostream>
#include "components.h"
using namespace std;

bool Username::isBurning = false;
////string  Username::name;
//int Username::luck;

//string Item::
int Item::SuccessPercentage;


//Username(Warrior, Magician, Archer)
Username::Username(const string name, int level, int money, int luck) :name(name), level(level), money(money), luck(luck) {}; 
Warrior::Warrior(string name, int level, int money, int luck) :Username(name, level, money, luck) {};
Magician::Magician(string name, int level, int money, int luck) :Username(name, level, money, luck) {};
Archer::Archer(string name, int level, int money, int luck) :Username(name, level, money, luck) {};

//���
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
    //Ȯ�� ���
    Item::SuccessPercentage = 50 + Username::luck;
    if (isBurning) {
        if (Item::SuccessPercentage <= 90) {
            Item::SuccessPercentage += 10;
        }
        else if (Item::SuccessPercentage > 90) {
            Item::SuccessPercentage = 100;
        }
    }
    else {
        Item::SuccessPercentage = 50 + Username::luck;
    }
    //����
    srand(time(NULL));
    if (rand() % 100 >= Item::SuccessPercentage) {
        cout << "���� ����!" << endl;
        return a + b;
    }
    else if (rand() % 100 < Item::SuccessPercentage) {
        cout << "���� ����!" << endl;
        Item failedItem = Item("���� ���� ������", 0);
        return  failedItem;
    }
    else  {
        cout << "���� ����!" << endl;
        Item failedItem = Item("���� ���� ������", 0);
        return  failedItem;
    }

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
Item::Item(string name, int performance) :name(name), performance(performance) {};
int  Item::GetPerformance() {
    return performance;
}
Item operator+ (Item a,Item b) {
    int combinatedperformance = a.performance+b.performance;
    Item combinatedItem =Item("���� ���� ������",combinatedperformance);
    return combinatedItem;
}

//Manager
Manager::Manager(string name) :name(name) {};
void Manager::openBurningEvent() {
    Username::isBurning = true;
    cout << "���� �̺�Ʈ ����" << endl;
};
void Manager::closeBurningEvent() {
    Username::isBurning = false;
};
