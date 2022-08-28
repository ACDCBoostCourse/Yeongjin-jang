//구현부
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

//방어
void Username::defend() {
    cout << "(" << Username::name << ") : 방어" << endl;
}
void Warrior::defend() {
    cout << "(" << Username::name << ") : 방어" << endl;
}
void Magician::defend() {
    cout << "(" << Username::name << ") : 방어" << endl;
}
void Archer::defend() {
    cout << "(" << Username::name << ") : 방어" << endl;
}

Item Username::combinate(Item a, Item b) {
    //확률 계산
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
    //조합
    srand(time(NULL));
    if (rand() % 100 >= Item::SuccessPercentage) {
        cout << "조합 성공!" << endl;
        return a + b;
    }
    else if (rand() % 100 < Item::SuccessPercentage) {
        cout << "조합 실패!" << endl;
        Item failedItem = Item("조합 실패 아이템", 0);
        return  failedItem;
    }
    else  {
        cout << "조합 실패!" << endl;
        Item failedItem = Item("조합 실패 아이템", 0);
        return  failedItem;
    }

}

void Warrior::attack() {
    cout << "(" << Username::name << ") : 검 휘두르기" << endl;
}
void Magician::attack() {
    cout << "(" << Username::name << ") : 마법 쓰기" << endl;
}
void Archer::attack() {
    cout << "(" << Username::name << ") : 활 쏘기" << endl;
}

//Item
Item::Item(string name, int performance) :name(name), performance(performance) {};
int  Item::GetPerformance() {
    return performance;
}
Item operator+ (Item a,Item b) {
    int combinatedperformance = a.performance+b.performance;
    Item combinatedItem =Item("조합 성공 아이템",combinatedperformance);
    return combinatedItem;
}

//Manager
Manager::Manager(string name) :name(name) {};
void Manager::openBurningEvent() {
    Username::isBurning = true;
    cout << "버닝 이벤트 적용" << endl;
};
void Manager::closeBurningEvent() {
    Username::isBurning = false;
};
