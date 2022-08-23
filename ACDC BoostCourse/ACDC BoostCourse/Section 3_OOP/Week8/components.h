//선언부

#ifndef  COMPONENTS_H
#define COMPONENTS_H
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//유저
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
		cout << "(" << Username::name << ") : 방어" << endl;
	};
	virtual void combinate();
};

class Warrior :Username {
public:
	void attack() {
		cout << "(" << Username::name << ") : 검 휘두르기" << endl;
	}
};
class Magician : Username {
	void attack() {
		cout << "(" << Username::name << ") : 마법 쓰기" << endl;
	}
};
class Archer : Username {
	void attack() {
		cout << "(" << Username::name << ") : 활 쏘기" << endl;
	}
};

//아이템
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
			cout << "조합 성공!" << endl;
			CombinatedPerformance=a.performance + b.performance;
			CombinatedName = "조합 성공 아이템";
		}
		else if (rand() % 100 < SuccessPercentage) {
			cout << "조합 실패!" << endl;
			CombinatedPerformance = 0;
			CombinatedName = "조합 실패 아이템";
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
			cout << "버닝 이벤트 적용" << endl;
	};
	void closeBurningEvent() {
		Username::isBurning = false;
	};
	
};

#endif 
