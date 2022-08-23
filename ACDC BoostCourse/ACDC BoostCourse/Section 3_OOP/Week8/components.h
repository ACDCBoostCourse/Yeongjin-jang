//�����

#ifndef  COMPONENTS_H
#define COMPONENTS_H
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//����
class Username {
private:
	int level;
	int money;
	static int luck;
	static bool isBurning;
	friend class Manager;
	friend class Item;
	
protected:
	string const name;
	
public:
	
	virtual void attack();
	void defend() {
		cout << "(" << Username::name << ") : ���" << endl;
	};
	virtual void combinate();
};

class Warrior :Username {
public:
	void attack() {
		cout << "(" << Username::name << ") : �� �ֵθ���" << endl;
	}
};
class Magician : Username {
	void attack() {
		cout << "(" << Username::name << ") : ���� ����" << endl;
	}
};
class Archer : Username {
	void attack() {
		cout << "(" << Username::name << ") : Ȱ ���" << endl;
	}
};

//������
class Item {
	string const name;
	int const performance;
	string CombinatedName;
	int CombinatedPerformance;
	friend class Manager;
public:
	static int SuccessPercentage;
	int GetPerformance() { return performance; }
	string operator+ (Item b) {

	}
	Item combinate(Item a, Item b) {
		if (rand() % 100 >= SuccessPercentage) {
			cout << "���� ����!" << endl;
			CombinatedPerformance=a.performance + b.performance;
			CombinatedName = "���� ���� ������";
		}
		else if (rand() % 100 < SuccessPercentage) {
			cout << "���� ����!" << endl;
			CombinatedPerformance = 0;
			CombinatedName = "���� ���� ������";
		}
	};

};

//Manager
class Manager {
	string  name;
public:
	void openBurningEvent() {
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
	void closeBurningEvent() {
		Username::isBurning = false;
	};
	
};

#endif 
